/*
If a five-digit number is input through the keyboard, write a 
program to reverse the number.
*/

#include <stdio.h>

int main() {
    int num, mun=0;
    printf("Enter a five digit number: \n");
    scanf("%d", &num);
    int multiplier = 10000;
    for(int i=0; i<=5; i++){
        mun += (num % 10) * multiplier;
        num /= 10;
        multiplier /= 10;
    }
    printf("The reversed number is %d", mun);
    return 0;
}