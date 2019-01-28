#include<stdio.h>
void main()
{
    int n,d,original,armstrong=0;
    printf("\nEnter number:");
    scanf("%d",&original);
    n=original;
    while(n>0)
    {
        d=n%10;
        armstrong=armstrong+d*d*d;
        n=n/10;
    }
    if(original==armstrong)
    printf("%d is armstrong.",original);
    else
    printf("%d is not armstrong.",original);
}
/*output
Enter number:153
153 is armstrong.*/