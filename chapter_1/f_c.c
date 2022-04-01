/*
 If the marks obtained by a student in five different subjects are 
input through the keyboard, write a program to find out the 
aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student 
in each subject is 100.
*/

#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, aggregate;
    float per;
    printf("Enter the marks obtained by the student in five subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    aggregate = m1 + m2 + m3 + m4 + m5;
    per = aggregate * 100 / 500;
    printf("Aggregate marks: %d\nPercentage: %f%", aggregate, per);
    return 0;
}