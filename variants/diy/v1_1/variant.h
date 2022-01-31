// For OLED LCD
//#undef RESET_OLED
#define I2C_SDA 21
#define I2C_SCL 22

// GPS
#undef GPS_RX_PIN
#define GPS_RX_PIN 15
#undef GPS_TX_PIN
#define GPS_TX_PIN 24 // 4 // 12 // not connected

#define BUTTON_PIN 2 // 39 // The middle button GPIO on the T-Beam
#define BUTTON_NEED_PULLUP

#define EXT_NOTIFY_OUT 13 // 12 // Overridden default pin to use for Ext Notify Plugin (#975).

#define LORA_CS 18    // CS/NSS for SX126X
#define LORA_DIO0 26  // a No connect on the SX1262/SX1268 module
#define LORA_RESET 27 // 23 // RST for SX1276, and for SX1262/SX1268
#define LORA_DIO1 12  // 33  // IRQ for SX1262/SX1268
#define LORA_DIO2 14  // 32  // BUSY for SX1262/SX1268
#define LORA_DIO3     // Not connected on PCB, but internally on the TTGO SX1262/SX1268, if DIO3 is high the TXCO is enabled

// In transmitting, set TXEN as high communication level，RXEN pin is low level;
// In receiving, set RXEN as high communication level, TXEN is lowlevel;
// Before powering off, set TXEN、RXEN as low level.
#define LORA_RXEN 17  // Input - RF switch RX control, connecting external MCU IO, valid in high level
#define LORA_TXEN 4  // Input - RF switch TX control, connecting external MCU IO or DIO2, valid in high level

#undef RF95_SCK
#define RF95_SCK 5
#undef RF95_MISO
#define RF95_MISO 19
#undef RF95_MOSI
#define RF95_MOSI 23
#undef RF95_NSS
#define RF95_NSS LORA_CS

// RX/TX for RFM95/SX127x
#define RF95_RXEN LORA_RXEN
#define RF95_TXEN LORA_TXEN
// #define RF95_TCXO <GPIO#>

// common pinouts for SX126X modules
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN LORA_RXEN
#define SX126X_TXEN LORA_TXEN

// supported modules list
#define USE_RF95 // RFM95/SX127x
#define USE_SX1262
#define USE_SX1268
#define USE_LLCC68

#ifdef EBYTE_E22
// Internally the TTGO module hooks the SX126x-DIO2 in to control the TX/RX switch
// (which is the default for the sx1262interface code)
#define SX126X_E22
#endif