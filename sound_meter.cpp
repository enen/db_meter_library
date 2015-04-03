/* db meter library
   Date: 01-04-2015
   Autor: J. Lucas Grillo
*/
#include <sound_meter.h>

// Returns noise level in decibells
double get_abs_db(int *input, int sound_pin) {
   int x = (!input) ? analogRead(sound_pin) : *input;
   return 20 * log((double)x / (double)ADC_SOUND_REF) + DB_SOUND_REF;
}
