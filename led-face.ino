/*
 * Arduino SSD1306 I2C demo
 * based on
 *   https://github.com/adafruit/Adafruit_SSD1306/blob/master/examples/ssd1306_128x64_i2c/ssd1306_128x64_i2c.ino
 */

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// The pins for I2C are defined by the Wire-library. 
// On an arduino UNO:       A4(SDA), A5(SCL)
// On an arduino MEGA 2560: 20(SDA), 21(SCL)
// On an arduino LEONARDO:   2(SDA),  3(SCL), ...
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3c ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Clear the buffer
  display.clearDisplay();

}

void loop() {
    display.drawPixel(1, 2, HIGH); // зажигаем пиксель с координатами {3,4} 
    display.drawPixel(2, 3, HIGH); // зажигаем пиксель с координатами
    display.drawPixel(2, 2, HIGH); // зажигаем пиксель с координатами 
    display.drawPixel(1, 3, HIGH); // зажигаем пиксель с координатами 
    display.drawPixel(5, 3, HIGH); // зажигаем пиксель с координатами 
    display.drawPixel(6, 3, HIGH); // зажигаем пиксель с координатами 
    display.drawPixel(6, 2, HIGH); // зажигаем пиксель с координатами
    display.drawPixel(5, 2, HIGH); // зажигаем пиксель с координатами
    display.drawPixel(1, 5, HIGH); // зажигаем пиксель с координатами
    display.drawPixel(1, 6, HIGH); // зажигаем пиксель с координатами 
    display.drawPixel(2, 6, HIGH); // зажигаем пиксель с координатами
    display.drawPixel(3, 6, HIGH); // зажигаем пиксель с координатами
    display.drawPixel(4, 6, HIGH); // зажигаем пиксель с координатами 
    display.drawPixel(5, 6, HIGH); // зажигаем пиксель с координатами 
    display.drawPixel(6, 6, HIGH); // зажигаем пиксель с координатами  
    display.drawPixel(6, 5, HIGH); // зажигаем пиксель с координатами    
    display.display(); // вывод всех пикселей на матрицу
    delay(5000);

    display.clearDisplay();
    display.display(); // вывод всех пикселей на матрицу
    delay(300);
}
