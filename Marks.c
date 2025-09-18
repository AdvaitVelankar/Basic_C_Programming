#include <stdio.h>

int main()
{
    int m1, m2, m3, t;
    float per;
    printf("Enter Marks 1\n");
    scanf("%d", &m1);
    printf("Enter Marks 2\n");
    scanf("%d", &m2);
    printf("Enter Marks 3\n");
    scanf("%d", &m3);
    t=(m1+m2+m3);
    per=((m1+m2+m3)/3);
    printf("Total marks obtained out of 300 is %d\n", t);
    printf("Percentage Obtained is %.2f\n", per);
    if(m1<33 || m2<33 || m3<33)
    printf("You are failed in indivisual subject");
    if(per>=40.00)
    printf("Your are passed!");
    else
    printf("You are failed");
    return 0;
}