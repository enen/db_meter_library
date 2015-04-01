/* db meter library
   Date: 01-04-2015
   Autor: J. Lucas Grillo
*/
#include "sound_meter.h"

// Returns noise level in decibells
long get_dbs(int *input = NULL) {
   int x = (!input) ? analogRead(ANALOG_SOUND_PIN) : *input;
   return 20 * log ( x / ADC_SOUND_REF ) + DB_SOUND_REF;
}
