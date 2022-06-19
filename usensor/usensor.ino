#include <NewPing.h>
#define TRIGGER_PIN  D5  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     D6  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
void setup() {
 Serial.begin(9600); // Open serial monitor at 115200 baud to see ping results.
 pinMode(D1,OUTPUT);
 pinMode(D2,OUTPUT);
 pinMode(D3,OUTPUT);
 pinMode(D4,OUTPUT);
}
void loop() {
 delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
 Serial.print("Ping: ");
 Serial.print(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
 Serial.println("cm");

 if(sonar.ping_cm()<=40 && sonar.ping_cm()>30 )
 {
  digitalWrite(D4,HIGH);
 }
 else
 {
  digitalWrite(D4,LOW);
 }
 if(sonar.ping_cm()<=30 && sonar.ping_cm()>20 )
 {
  digitalWrite(D3,HIGH);
 }
 else
 {
  digitalWrite(D3,LOW);
 }
 if(sonar.ping_cm()<=20 && sonar.ping_cm()>10 )
 {
  digitalWrite(D2,HIGH);
 }
 else
 {
  digitalWrite(D2,LOW);
 }
 if(sonar.ping_cm()<10 && sonar.ping_cm()>=0 )
 {
  digitalWrite(D1,HIGH);
 }
 else
 {
  digitalWrite(D1,LOW);
 }
}
