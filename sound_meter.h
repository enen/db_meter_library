/* db meter library
   Date: 01-04-2015
   Autor: J. Lucas Grillo
*/
#ifndef _DB_METER_LIB_
#define _DB_METER_LIB_

#define ANALOG_SOUND_PIN 0
#define ADC_SOUND_REF 40
#define DB_SOUND_REF 50

#include "Arduino.h"
#include "math.h"

// Returns noise level in decibells
double get_abs_db(int *input = NULL, int sound_pin = 0);

#endif
