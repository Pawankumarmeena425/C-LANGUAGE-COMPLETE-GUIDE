/*Write a program to print the multiplication table of the number
entered by the user. The table should get displayed in the
following form:
29 * 1 = 29
29 * 2 = 58
…               */
#include<stdio.h>

int main (){
    int num,i;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("Multiplaction Table of %d is::\n",num);
for ( i = 1; i <=10; i++)
{
    printf("%d * %d = %d\n",num,i,num*i);
}

return 0;
}