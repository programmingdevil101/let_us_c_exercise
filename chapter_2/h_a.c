/*
If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. (Hint: Use the modulus 
operator ‘%’) 
*/

#include <stdio.h>

int main() {
    int num, sum=0;
    printf("Enter a five digit number: \n");
    scanf("%d", &num);
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num;
    printf("The sum of digits of number is %d\n", sum);
    return 0;
}