/*Print pattern like this way::
*
* *
* * *
* * * * *
* * * * * *
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number for pirnt star pattern.\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}