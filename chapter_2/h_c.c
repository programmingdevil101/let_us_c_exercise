/*
If lengths of three sides of a triangle are input through the 
keyboard, write a program to find the area of the triangle
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, sp, prod, area;
    printf("Enter the length of sides of triangle: \n");
    scanf("%f%f%f", &a, &b, &c);
    sp = (a + b + c) / 2;
    prod = sp * (sp - a) * (sp - b) * (sp -c);
    area = sqrt(prod);
    printf("The area of triangle is %.2f", area);
    return 0;
}