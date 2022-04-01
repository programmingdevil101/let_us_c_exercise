/*
The length and breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the area 
and perimeter of the rectangle, and the area and circumference of 
the circle.
 */

#include <stdio.h>

int main() {
    float l, b, r, ar, pr, ac, cc;
    printf("Enter the lenght, breadth of a reactangle and radius of the circle: \n");
    scanf("%f%f%f", &l, &b, &r);
    ar = l * b;
    pr = 2 * (l + b);
    ac = 3.14 * r * r;
    cc = 2 * 3.14 * r;
    printf("Area of rectangle: %.2f\nPerimeter of rectangle: %.2f\n", ar, pr);
    printf("Area of circle: %.2f\nCircumference of circle: %.2f\n", ac, cc);
    return 0;
}