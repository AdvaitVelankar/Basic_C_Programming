#include <stdio.h>

int main()
{
    float p, r, t, si=0.0;

    //User input
    printf("Enter principal amount\n");
    scanf("%f", &p);
    printf("Enter rate of interest\n");
    scanf("%f", &r);
    printf("Enter time period\n");
    scanf("%f", &t);

    //Calculations
    si=((p*r*t)/100);

    //Display
    printf("You will have  to pay %.2f", si);
    return 0;
}