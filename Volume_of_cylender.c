#include <stdio.h>

int main()
{
    float r, h, v=0.0;

    //Taking user inputs
    printf("Enter radius\n");
    scanf("%f", &r);
    printf("Enter height\n");
    scanf("%f", &h);

    //Calculations
    v=((22*r*r*h)/7);

    //Display
    printf("Volume of the cylender having radius %f and height %f is %.2f", r, h, v);
    return 0;
}