/* db meter library
   Date: 01-04-2015
   Autor: J. Lucas Grillo
*/
#ifndef _DB_METER_LIB_
#define _DB_METER_LIB_

#define ANALOG_SOUND_PIN 0
#define ADC_SOUND_REF 500
#define DB_SOUND_REF 40

#include "Arduino.h"
#include "math.h"

// Returns noise level in decibells
long get_dbs(int *input = NULL);

#endif
