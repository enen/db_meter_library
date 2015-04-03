#include <sound_meter.h>

#define SOUND_PIN 0

void setup() {
  // Initilize hardware serial 
  Serial.begin(9600);
}

void loop() {
  // Get analog read from sound level pin
  int level = analogRead(SOUND_PIN);
  int *plevel = &level;

  // Print some messages
  Serial.print("Analog: ");
  Serial.print(level);
  Serial.print(" (");

  // Print absolute sound db from level value
  Serial.print(get_abs_db(plevel));
  Serial.print("-");
  
  // Print absolute sound db from SOUND_PIN read
  Serial.print(get_abs_db(NULL, SOUND_PIN));
  
  Serial.println(" db)");
  delay(30);
}
