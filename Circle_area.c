#include <stdio.h>

int main()
{
    float r, a=0.0;
    printf("Enter the radius of the circle\n");
    scanf("%f", &r);
    a=((22*r*r)/7);
    printf("Area of circle is %.2f", a);
    return 0;
}