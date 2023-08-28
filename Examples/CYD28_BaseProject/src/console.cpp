#include "console.h"
#include "SimpleCLI.h"
#include "CYD28_SD.h"
#include "CYD28_audio.h"

#define CONSOLE_RX_BUF_SIZE     64

const char UCLS[] = {"\x1b"
					 "[2J"};
const char UHOME[] = {"\x1b"
					  "[;H"};

void errorCallback(cmd_error *e);

SimpleCLI cli;

char rx_buf[CONSOLE_RX_BUF_SIZE];
uint8_t rx_idx = 0;

Command listSD;
void listSD_cb(cmd *c);

Command playFile;
void playFile_cb(cmd *c);

// -------------------------------------------------------
void console_init(void)
{   
    Serial.begin(115200); 
    Serial.println("CYD console ready");    
    cli.setOnError(errorCallback);      // Set error Callback

	listSD = cli.addCmd("list", listSD_cb);
	playFile = cli.addSingleArgCmd("play", playFile_cb);

    memset(rx_buf, 0x00, sizeof(rx_buf));
}
// -------------------------------------------------------
void console_process(void)
{
    while (Serial.available())
    {
        uint8_t data_in = Serial.read();
        rx_buf[rx_idx++] = data_in;
        if (rx_idx > CONSOLE_RX_BUF_SIZE)   rx_idx = 0;
        Serial.write(data_in);  // echo characters
        if (data_in == '\n') // reached end of line, parse input buffer
        {
            cli.parse(rx_buf);
            Serial.print("# ");
            memset(rx_buf, '\0', sizeof(rx_buf));
            rx_idx = 0;
        }
    }
}
// -------------------------------------------------------
void listSD_cb(cmd *c)
{
    Command cmd(c); // Create wrapper object
	sdcard.listDir("/", 2);
}
// -------------------------------------------------------
void playFile_cb(cmd *c)
{
	char buf[256];
	uint16_t len;
	Command cmd(c); // Create wrapper object
	Argument arg = cmd.getArgument(0);
	String argVal = arg.getValue();
	len = argVal.length();
	if (len > 255) 
	{
		Serial.println("Error! path too long!");
		return;
	}
	argVal.toCharArray(buf, len+1);
	audioConnecttoSD(buf);
}
// -------------------------------------------------------
// Callback in case of an error
void errorCallback(cmd_error *e)
{
    CommandError cmdError(e); // Create wrapper object

    Serial.print("ERROR: ");
    Serial.println(cmdError.toString());

    if (cmdError.hasCommand())
    {
        Serial.print("Did you mean \"");
        Serial.print(cmdError.getCommand().toString());
        Serial.println("\"?");
    }
}
