#include <stdio.h>

void tenx(int*);

void tenx(int* a)
{
    *a*=10;
}

int main()
{
    int a=45;
    printf("Original Value: %d\n", a);
    tenx(&a);
    printf("10 times value %d\n", a);
    return 0;
}