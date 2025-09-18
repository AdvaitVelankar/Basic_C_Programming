#include <stdio.h>

int main()
{
    float c, f=0.0;
    
    //User input
    printf("Enter Temperature in degree centigrade\n");
    scanf("%f", &c);

    //Calculation
    f=(((9*c)/5)+32);

    //Display
    printf("Temperature in degree farhenheit is %.2f", f);
    return 0;
}