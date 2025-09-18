#include <stdio.h>

int main()
{
    int i, *j=&i;
    printf("Enter a number:\n");
    scanf("%d", &i);
    j=&i;
    printf("Address is: %p\n", &i);
    printf("The value stored in the above address is: %d", *j);
    return 0;
}