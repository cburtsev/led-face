#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Max72xxPanel.h>

int pinCS = 9;
int numberOfHorizontalDisplays = 1; // количество матриц по-горизонтали
int numberOfVerticalDisplays = 1; // количество матриц по-вертикали

Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays, numberOfVerticalDisplays);

void setup() {
    matrix.setIntensity(4); // яркость от 0 до 15
}

void loop() {
    matrix.drawPixel(1, 2, HIGH); // зажигаем пиксель с координатами {3,4} 
    matrix.drawPixel(2, 3, HIGH); // зажигаем пиксель с координатами
    matrix.drawPixel(2, 2, HIGH); // зажигаем пиксель с координатами 
    matrix.drawPixel(1, 3, HIGH); // зажигаем пиксель с координатами 
    matrix.drawPixel(5, 3, HIGH); // зажигаем пиксель с координатами 
    matrix.drawPixel(6, 3, HIGH); // зажигаем пиксель с координатами 
    matrix.drawPixel(6, 2, HIGH); // зажигаем пиксель с координатами
    matrix.drawPixel(5, 2, HIGH); // зажигаем пиксель с координатами
    matrix.drawPixel(1, 5, HIGH); // зажигаем пиксель с координатами
    matrix.drawPixel(1, 6, HIGH); // зажигаем пиксель с координатами 
    matrix.drawPixel(2, 6, HIGH); // зажигаем пиксель с координатами
    matrix.drawPixel(3, 6, HIGH); // зажигаем пиксель с координатами
    matrix.drawPixel(4, 6, HIGH); // зажигаем пиксель с координатами 
    matrix.drawPixel(5, 6, HIGH); // зажигаем пиксель с координатами 
    matrix.drawPixel(6, 6, HIGH); // зажигаем пиксель с координатами  
    matrix.drawPixel(6, 5, HIGH); // зажигаем пиксель с координатами    
    matrix.write(); // вывод всех пикселей на матрицу
    delay(5000);
    matrix.drawPixel(1, 2, LOW); // гасим пиксель
    matrix.drawPixel(2, 3, LOW); // гасим пиксель 
    matrix.drawPixel(2, 2, LOW); // гасим пиксель
    matrix.drawPixel(1, 3, LOW); // гасим пиксель
    matrix.drawPixel(5, 3, LOW); // гасим пиксель 
    matrix.drawPixel(6, 3, LOW); // гасим пиксель
    matrix.drawPixel(6, 2, LOW); // гасим пиксель 
    matrix.drawPixel(5, 2, LOW); // гасим пиксель 
    matrix.drawPixel(1, 5, LOW); // гасим пиксель 
    matrix.drawPixel(1, 6, LOW); // гасим пиксель 
    matrix.drawPixel(2, 6, LOW); // гасим пиксель
    matrix.drawPixel(3, 6, LOW); // гасим пиксель 
    matrix.drawPixel(4, 6, LOW); // гасим пиксель
    matrix.drawPixel(5, 6, LOW); // гасим пиксель
    matrix.drawPixel(6, 6, LOW); // гасим пиксель 
    matrix.drawPixel(6, 5, LOW); // гасим пиксель
    matrix.write();
    delay(300);
}