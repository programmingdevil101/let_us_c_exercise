/*
Temperature of a city in Fahrenheit degrees is input through the 
keyboard. Write a program to convert this temperature into 
Centigrade degrees.
*/

#include <stdio.h>

int main() {
    float temp_f, temp_c;
    printf("Enter the city temperature in farenheit: \n");
    scanf("%f", &temp_f);
    temp_c = (temp_f - 32) / 1.8; // c/100 = (f-32)/180
    printf("The temperature of city in celcius is %.2f", temp_c);
    return 0;
}