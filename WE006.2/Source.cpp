#include<stdio.h>

void main()
{
    int number;
    float temp, sqrt;
    printf("Enter number : ");
    scanf_s("%d", &number);
    sqrt = number / 2;
    temp = 0;
    while (sqrt != temp) {
        temp = sqrt;
        sqrt = (number / temp + temp) / 2;
    }
    printf("\nSquare root of %d is  %f", number, sqrt);
}