#include <Servo.h>
#include <RF24.h>

RF24 radio(9, 10);
Servo servoTiro;
int motorPin = 3;

void setup() {
    radio.begin();
    radio.openReadingPipe(1, 0xF0F0F0F0E1LL); //encryption
    radio.startListening();
    servoTiro.attach(6);
    pinMode(motorPin, OUTPUT);
}

void loop() {
    if (radio.available()) {
        char text[32] = "";
        radio.read(&text, sizeof(text));
        if (strcmp(text, "shoot") == 0) {
            servoTiro.write(90);
            delay(500);
            servoTiro.write(0);
        }
    }
}
