SPI1    
PORT            GPIOA
SCL             PA5
MOSI            PA7
MISO            PA6

NSS             PA2
ST7735_A0       PA3
RESET           PA1


Command Write Mode
The write mode of the interface means the micro controller writes commands and data to the LCD driver. 3-line serial data
packet contains a control bit D/CX and a transmission byte. In 4-line serial interface, data packet contains just transmission
byte and control bit D/CX is transferred by the D/CX pin. If D/CX is “low”, the transmission byte is interpreted as a
command byte. If D/CX is “high”, the transmission byte is stored in the display data RAM (memory write command), or
command register as parameter.


