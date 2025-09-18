#include <stdio.h>

float temp(float);

float temp(float c)
{
    float t=(((c*9)/5.0)+32);
    return t;
}
int main()
{
    float c, f;
    printf("Enter the temperature in degree celcius\n");
    scanf("%f", &c);
    f=temp(c);
    printf("Temperature in degree fahrenheit is %.2f", f);
    return 0;
}