# Smart Plant Watering System

**Project Overview**

*Smart Plant Watering System* is an IoT solution that automatically waters your plants based on real-time soil moisture readings. It leverages an Arduino microcontroller, a soil moisture sensor and a small water pump to keep your plants healthy even when you're away.

> "The best time to water your plants is when they need it." – Unknown

## Features

- Automatically measures soil moisture and waters the plant when dry.
- Uses a water pump controlled by a relay module.
- LEDs indicate moisture status.
- Configurable threshold to suit different plant types.
- Low cost and easy to build.

## Bill of Materials

1. Arduino Uno (or compatible board).
2. Soil Moisture Sensor.
3. 5V Mini Water Pump.
4. Relay Module.
5. Jumper Wires and Breadboard.
6. USB cable and power supply.
7. 3D‑printed plant pot (optional).

## Usage Instructions

1. Wire the soil moisture sensor to the Arduino (AO to A0).
2. Connect the relay module to digital pin 8 and the pump to the relay's normally open terminals.
3. Upload the provided Arduino code to your board.
4. Place the sensor in the plant's soil and submerge the pump's intake in a water reservoir.
5. Adjust the moisture threshold in the code to fine‑tune watering behavior.

### Sample Code

```
const int sensorPin = A0;
const int pumpPin = 8;
int threshold = 600;

void setup() {
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(sensorPin);
  Serial.println(moisture);
  if (moisture < threshold) {
    digitalWrite(pumpPin, HIGH);  // turn pump on
  } else {
    digitalWrite(pumpPin, LOW);   // turn pump off
  }
  delay(1000);
}
```

---

For more details about using soil moisture sensors with Arduino, see [this tutorial](https://docs.arduino.cc/tutorials/uno-soil-moisture-sensor).

![Watering Can](https://upload.wikimedia.org/wikipedia/commons/thumb/c/cc/Watering-can.svg/640px-Watering-can.svg.png)
