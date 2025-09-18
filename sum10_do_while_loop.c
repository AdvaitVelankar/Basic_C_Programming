#include <stdio.h>

int main()
{
    int sum=0, n=0;
    do{
        sum+=n;
        n++;
    }while(n<=10);
    printf("%d", sum);
    return 0;
}