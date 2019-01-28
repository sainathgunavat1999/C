#include<stdio.h>
void main()
{
    int n,i;
    long long int fact=1;
    printf("\nEnter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("\n%d!=%lld",n,fact);
}
/*OUTPUT
Enter number:5

5!=120
*/