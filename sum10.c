#include <stdio.h>

int main()
{
    int sum=0, n=0;
    while(n<=10)
    {
        sum+=n;
        n++;
    }
    printf("%d", sum);
    return 0;
}