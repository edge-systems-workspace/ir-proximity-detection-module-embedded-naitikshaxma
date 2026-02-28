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

    // TODO 3:
    // Initialize Serial communication
    Serial.begin(9600);

    // TODO 4:
    // Configure IR pin as INPUT
    pinMode(IR_PIN, INPUT);

    // TODO 5:
    // Print system initialization message
    Serial.println("IR Obstacle Detection System Initialized...");
}

void loop() {
}