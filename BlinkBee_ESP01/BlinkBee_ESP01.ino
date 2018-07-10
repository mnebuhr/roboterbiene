#define FASTLED_ESP8266_RAW_PIN_ORDER
#define FASTLED_ALLOW_INTERRUPTS 0

#include "FastLED.h"

#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 1

#define NUM_LEDS 1

#define DATA_PIN 0

// Define the array of leds
CRGB leds[NUM_LEDS];

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

void setup() { 
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  delay(100);
  leds[0] = CRGB(0,0,0);
  FastLED.show();
  delay(100);
  sensors.begin();  
}

void loop() { 
    sensors.requestTemperatures(); // Send the command to get temperatures
    delay(100);
    int temp = (int) sensors.getTempCByIndex(0);
    if (temp >= 60) {
      leds[0] = CHSV(40,255,255);  
    } else if (temp <= 0) {
      leds[0] = CHSV(100,255,255);  
    } else {
      leds[0] = CHSV(map(temp,0,60,150,255),255,255);  
    }
    
    FastLED.show();
    delay(2000);
}
