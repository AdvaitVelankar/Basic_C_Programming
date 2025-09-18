#include <stdio.h>

float f(float);

float f(float mass)
{
    return (mass*9.8);
}
int main()
{
    float mass, results;
    printf("Enter the mass of the body\n");
    scanf("%f", &mass);
    results=f(mass);
    printf("The force applied is %.2f Newton", results);
    return 0;
}