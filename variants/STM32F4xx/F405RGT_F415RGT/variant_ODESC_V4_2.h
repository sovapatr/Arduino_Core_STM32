#pragma once


/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
#define PC13        2   // ANTI_TAMP    // M0_nCS
#define PC14        3   // OSC32_IN     // M1_nCS
#define PC15        4   // OSC32_OUT    // M1_ENC_Z
#define PH0         5
#define PH1         6

#define PA4         PIN_A0
#define PA5         PIN_A1
#define PA6         PIN_A2
#define PC0         PIN_A3
#define PC1         PIN_A4
#define PC2         PIN_A5
#define PC3         PIN_A6
#define PC5         PIN_A7

#define PA0         14
#define PA1         15
#define PA2         16
#define PA3         17
#define PA7         23
#define PC4         24
#define PC5         25
#define PB0         26
#define PB1         27
#define PB2         28
#define PB10        29
#define PB11        30
#define PB12        33
#define PB13        34
#define PB14        35
#define PB15        36
#define PC6         37
#define PC7         38
#define PC8         39
#define PC9         40
#define PA8         41
#define PA9         42
#define PA10        43
#define PA11        44
#define PA12        45
#define PA13        46
#define PA14        49
#define PA15        50
#define PC10        51
#define PC11        52
#define PC12        53
#define PD2         54
#define PB3         55
#define PB4         56
#define PB5         57
#define PB6         58
#define PB7         59
#define PB8         61
#define PB9         62

// This must be a literal
#define NUM_DIGITAL_PINS        63
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
  #define PIN_SPI_SS            PB2
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