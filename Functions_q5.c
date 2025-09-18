#include <stdio.h>

int main()
{
    int a=4;
    printf("%d, %d, %d", a, ++a, a++);
    /*Evaluation order is from right to left so the answer is 6 6 4
    4 5 5 is also a connect answer if the evaluation ourder is lest to right.
    If a specific order is not given then compiler decides itself.*/
    return 0;
}