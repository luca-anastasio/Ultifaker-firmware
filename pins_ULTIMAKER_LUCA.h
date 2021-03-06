/*****************************************************************
* Ultimaker Luca pin assignment
******************************************************************/

#ifndef __AVR_ATmega1280__
 #ifndef __AVR_ATmega2560__
 #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
 #endif
#endif

#define LARGE_FLASH true

#define X_STEP_PIN 43
#define X_DIR_PIN 45
#define X_ENABLE_PIN 41

#define X_MIN_PIN 22    // used
#define X_MAX_PIN -1    // unused, was 24

#define Y_STEP_PIN 25
#define Y_DIR_PIN 23
#define Y_ENABLE_PIN 27

#define Y_MIN_PIN -1    // unused, was 26
#define Y_MAX_PIN 28    // used

#define Z_STEP_PIN 37
#define Z_DIR_PIN 39
#define Z_ENABLE_PIN 35

#define Z_MIN_PIN -1    // unused, was 30, NOW ASSIGNED TO HOT BED!!!
#define Z_MAX_PIN 32    // used

#define HEATER_BED_PIN 30    // was 4, now connected to z min
#define TEMP_BED_PIN 10

#define HEATER_0_PIN  3
#define TEMP_0_PIN 9

#define HEATER_1_PIN 2
#define TEMP_1_PIN 8

#define HEATER_2_PIN -1
#define TEMP_2_PIN -1

#define E0_STEP_PIN         31
#define E0_DIR_PIN          33
#define E0_ENABLE_PIN       29

#define E1_STEP_PIN         49
#define E1_DIR_PIN          47
#define E1_ENABLE_PIN       48

#define SDPOWER            -1
#define SDSS               53
#define LED_PIN            13
#define FAN_PIN            8
#define CONTROLLERFAN_PIN   7
#define PS_ON_PIN          12
#define KILL_PIN           -1
#define SUICIDE_PIN        54  //PIN that has to be turned on right after start, to keep power flowing.

#ifdef ULTRA_LCD

  #ifdef NEWPANEL
  //arduino pin witch triggers an piezzo beeper
    #define BEEPER_PIN 18

    #define LCD_PINS_RS 20
    #define LCD_PINS_ENABLE 17
    #define LCD_PINS_D4 16
    #define LCD_PINS_D5 21
    #define LCD_PINS_D6 5
    #define LCD_PINS_D7 6

    //buttons are directly attached
    #define BTN_EN1 42
    #define BTN_EN2 40
    #define BTN_ENC 19  //the click

    #define SD_DETECT_PIN 38

  #else //old style panel with shift register
    //arduino pin witch triggers an piezzo beeper
    #define BEEPER_PIN 18

    //buttons are attached to a shift register
    #define SHIFT_CLK 38
    #define SHIFT_LD 42
    #define SHIFT_OUT 40
    #define SHIFT_EN 17

    #define LCD_PINS_RS 16
    #define LCD_PINS_ENABLE 5
    #define LCD_PINS_D4 6
    #define LCD_PINS_D5 21
    #define LCD_PINS_D6 20
    #define LCD_PINS_D7 19

    #define SD_DETECT_PIN -1
  #endif
#endif //ULTRA_LCD
