#include<stdio.h>
void main()
{
    int n,d,original,rev=0;
    printf("\nEnter number:");
    scanf("%d",&original);
    n=original;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("%d reversed.",rev);
}
/*output
Enter number:14789
98741 reversed*/