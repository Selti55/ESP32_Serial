// Test Serielle Ausgabe auf LogicAnalyser
// Schnittstelle: Serial
// ist auf PIN 3 RX und PIN 1 TX fest verdrahtet

#include <Arduino.h>

byte count;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("Zaehler: ");
  Serial.println(count);
  count++;
  delay(500);
  // Test
}