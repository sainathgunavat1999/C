#include<stdio.h>
void main()
{
    int n,a=0,b=1,c,i;
    printf("\nEnter n:");
    scanf("%d",&n);
    printf("\n%d %d",a,b);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
}
/*OUTPUT
Enter n:5

0 1 1 2 3 5 8
*/