#pragma once


/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
// VBAT
#define PC13        0   // ANTI_TAMP    // M0_nCS
#define PC14        1   // OSC32_IN     // M1_nCS
#define PC15        2   // OSC32_OUT    // M1_ENC_Z
#define PH0         3
#define PH1         4
//NRST
#define PC0         PIN_A3
#define PC1         PIN_A4
#define PC2         PIN_A5
#define PC3         PIN_A6
//VSSA
//VDDA
#define PA0         9
#define PA1         10
#define PA2         11
#define PA3         12
//VSS
//VDD
#define PA4         PIN_A0
#define PA5         PIN_A1
#define PA6         PIN_A2
#define PA7         16
#define PC4         17
#define PC5         PIN_A7
#define PB0         19
#define PB1         20
#define PB2         21
#define PB10        22
#define PB11        23
//VCAP_1
//VDD
#define PB12        24
#define PB13        25
#define PB14        26
#define PB15        27
#define PC6         28
#define PC7         29
#define PC8         30
#define PC9         31
#define PA8         32
#define PA9         33
#define PA10        34
#define PA11        35
#define PA12        36
#define PA13        37
#define PA14        38
#define PA15        39
#define PC10        40
#define PC11        41
#define PC12        42
#define PD2         43
#define PB3         44
#define PB4         45
#define PB5         46
#define PB6         47
#define PB7         48
#define PB8         49
#define PB9         50

#define PC10_ALT1               (PC10 | ALT1)
#define PC11_ALT1               (PC11 | ALT1)
#define PC12_ALT1               (PC10 | ALT1)


// This must be a literal
#define NUM_DIGITAL_PINS        50
// This must be a literal with a value less than or equal to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       8

// No On-board LED pin number
#ifndef LED_BUILTIN
  #define LED_BUILTIN           PNUM_NOT_DEFINED
#endif

// No user button
#ifndef USER_BTN
  #define USER_BTN              PNUM_NOT_DEFINED
#endif

// SPI Definitions
#ifndef PIN_SPI_SS
  #define PIN_SPI_SS            PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_MOSI
  #define PIN_SPI_MOSI          PC12
#endif
#ifndef PIN_SPI_MISO
  #define PIN_SPI_MISO          PC11
#endif
#ifndef PIN_SPI_SCK
  #define PIN_SPI_SCK           PC10
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  4
#endif

// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PA1
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PA0
#endif

/* HAL configuration */
#define HSE_VALUE               12000000U

// Extra HAL modules
#if !defined(HAL_DAC_MODULE_DISABLED)
  #define HAL_DAC_MODULE_ENABLED
#endif
#if !defined(HAL_SD_MODULE_DISABLED)
  #define HAL_SD_MODULE_ENABLED
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

 #ifdef __cplusplus
 // These serial port names are intended to allow libraries and architecture-neutral
 // sketches to automatically default to the correct port name for a particular type
 // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
 // the first hardware serial port whose RX/TX pins are not dedicated to another use.
 //
 // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
 //
 // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
 //
 // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
 //
 // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
 //
 // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
 //                            pins are NOT connected to anything by default.
 #ifndef SERIAL_PORT_MONITOR
   #define SERIAL_PORT_MONITOR   Serial
 #endif
 #ifndef SERIAL_PORT_HARDWARE
   #define SERIAL_PORT_HARDWARE  Serial
 #endif
#endif