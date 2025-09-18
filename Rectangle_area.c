#include <stdio.h>>

int main()
{
    float l, w, a=0.0;

    // Taking user input
    printf("Enter the length of rectangle\n");
    scanf("%f", &l);
    printf("\nEnter the width of rectangle\n");
    scanf("%f", &w);

    // Calculations
    a=(l*w);
    
    //Display
    printf("\nArea of the rectangle is %.2f\n", a);
    return 0;
}