#include <NewPing.h>
#define TRIGGER_PIN  4
#define ECHO_PIN     3
#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(100);
  printResults(sonar.ping());
}

void printResults(unsigned int ping) {
  Serial.print("Distance: ");
  Serial.print(sonar.convert_cm(ping));
  Serial.println("cm");
}
