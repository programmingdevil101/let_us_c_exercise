/*
Write a program to receive Cartesian co-ordinates (x, y) of a point 
and convert them into polar co-ordinates (r, ).
Hint: r = sqrt ( x2 + y2) and tan-1( y / x )
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    float r, ang;
    printf("Enter the cooridinates of a point x, y: \n");
    scanf("%f%f", &x, &y);
    r = sqrt(x*x + y*y);
    ang = atan(y/x);
    printf("Polar co-ordinates: (%.3f, %.3f)", r, ang);
    return 0;
}