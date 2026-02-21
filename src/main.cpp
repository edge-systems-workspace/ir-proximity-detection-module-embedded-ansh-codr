#include <Arduino.h>

/**
 * @file main.cpp
 * @brief IR Obstacle Detection System
 * @author ansh-codr
 * @date 2026-02-21
 */

const int IR_PIN = 2;
int sensorState = 0;

void setup() {
    Serial.begin(9600);
    pinMode(IR_PIN, INPUT);
    Serial.println("IR Obstacle Detection System Initialized");
}

void loop() {
    sensorState = digitalRead(IR_PIN);
}