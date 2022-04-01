/*
 The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance in 
meters, feet, inches and centimeters.
*/

#include <stdio.h>

int main() {
    float dist, d_in_meters, d_in_feet, d_in_inches, d_in_cm;
    printf("Enter the distance in km: \n");
    scanf("%f", &dist);
    d_in_meters = dist * 1000; // 1km = 1000m
    d_in_feet = dist * 3280.84; // 1km = 3280.84 feet
    d_in_inches = d_in_feet * 12; // 1 foot = 12 inches
    d_in_cm = d_in_meters * 100; // 1m = 100cm
    printf("In meters: %f\nIn feet: %f\nIn inches: %f\nIn centimeters: %f\n", d_in_meters, d_in_feet, d_in_inches, d_in_cm);
    return 0;
}