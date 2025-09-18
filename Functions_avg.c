#include <stdio.h>

float avg (int, int, int);

float avg (int a, int b, int c)
{
    float average=((a+b+c)/3.0);
    printf("Average is %.2f", average);
    return average;
}
int main()
{
    int a, b, c;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("Enter third number\n");
    scanf("%d", &c);
    int average= avg(a, b, c);
    return 0;
}