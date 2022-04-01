/**
*Ramesh’s basic salary is input through the keyboard. His dearness 
*allowance is 40% of basic salary, and house rent allowance is 20% of 
*basic salary. Write a program to calculate his gross salary.
 */

#include <stdio.h>

int main() {
    int bs;
    float da, hsa, gs;

    printf("Enter ramesh's basic salary:\n");
    scanf("%d", &bs);
    //printf("%d", )
    da = bs * 40 / 100;
    hsa = bs * 20 / 100;
    gs = bs + da + hsa;
    printf("Ramesh's gross salary: %f", gs);
    return 0;
}