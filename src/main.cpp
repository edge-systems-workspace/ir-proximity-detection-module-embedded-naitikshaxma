#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Naitik Sharma
 * @date 2026-02-28
 */

#define IR_PIN 2
int irState = 0;

void setup() {
    Serial.begin(9600);
    pinMode(IR_PIN, INPUT);
    Serial.println("IR Obstacle Detection System Initialized...");
}

void loop() {

    // TODO 6:
    // Read digital value from IR sensor
    irState = digitalRead(IR_PIN);
}