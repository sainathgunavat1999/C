#include <stdio.h>
void main()
{
    int low, high, i, flag;
    printf("Enter interval:");
    scanf("%d %d", &low, &high);
    printf("\n");
    while (low < high)
    {
        flag = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", low);
        low++;
    }
}
/*OUTPUT
Enter interval:0
15

0 1 2 3 5 7 11 13 
*/