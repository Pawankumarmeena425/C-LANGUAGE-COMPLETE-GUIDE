/*Write a program to create an arry of size n using calloc where n is an integer 
entered by the user*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("How many integer do you want enter::\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element ::\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is :: %d\n", i + 1, ptr[i]);
    }

    return 0;
}