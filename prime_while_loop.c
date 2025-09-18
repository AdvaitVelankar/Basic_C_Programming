#include<stdio.h>

int main()
{
    int n, i=2, not_prime=0;
    printf("Enter a number\n");
    scanf("%d", &n);
    if(n==0 || n==1)
    not_prime=1;
    else
    {
        while(i<n)
        {
            if(n%i==0 &&n!=2)
            {
                not_prime=1;
                break;
            }
            i++;
        }
    }
    if(not_prime)
    printf("%d is not prime", n);
    else
    printf("%d is prime", n);
    return 0;
}