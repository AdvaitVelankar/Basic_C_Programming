#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("Enter the value of d\n");
    scanf("%d", &d);
    if(a>b && a>c && a>d)
    printf("%d is greater", a);
    else if(b>a && b>c && b>d)
    printf("%d is greater", b);
    else if(c>a && c>b && c>d)
    printf("%d is greater", c);
    else if(d>a && d>c && d>b)
    printf("%d is greater", d);
    else
    printf("ERROR!");
    return 0;
}