#include <stdio.h>

int main()
{
    int i;
    printf("Enter a number to find the address\n");
    scanf("%d", &i);
    printf("The address of the number is %p and the value stored in it is %d", &i, *(&i));
    return 0;
}