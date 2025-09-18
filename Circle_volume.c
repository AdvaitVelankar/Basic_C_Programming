#include <stdio.h>

int main()
{
    float r, a=0.0;
    // Taking user inputs
    printf("Enter the radius of the cicle\n");
    scanf("%f",&r);
    
    // Calculations
    a=((88*r*r*r)/21);

    // Display
    printf("Volume of circle is %.2f\n", a);
    return 0;
}