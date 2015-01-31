/*
 * Welcome to MultiWii.
 *
 * If you see this message, chances are you are using the Arduino IDE. That is ok.
 * To get the MultiWii program configured for your copter, you must switch to the tab named 'config.h'.
 * Maybe that tab is not visible in the list at the top, then you must use the drop down list at the right
 * to access that tab. In that tab you must enable your baord or sensors and optionally various features.
 * For more info go to http://www.multiwii.com/wiki/index.php?title=Main_Page
 *
 * Have fun, and do not forget MultiWii is made possible and brought to you under the GPL License.
 *
 */
 
/* I2C */
#if !defined (TEENSY3X)
  #if !defined(__MK20DX128__) && !defined(__MK20DX256__)
    #include "Wire.h" //	Uncomment for use on a standard Arduino
  #endif
#else
  #include <i2c_t3.h> //	Uncomment for use on a Teensy 3.0
#endif
#include "I2Cdev.h"
