#include <stdio.h>

int function(int* ptr)
{
    printf("Address of pointer in numbers is: %d\n", ptr);
    printf("Value in the pointer is: %d", *ptr);
}
int main()
{
    int i, *ptr=&i;
    printf("Enter a number:\n");
    scanf("%d", &i);
    printf("Address is: %p\n", &i);
    function(ptr);
    return 0;
}