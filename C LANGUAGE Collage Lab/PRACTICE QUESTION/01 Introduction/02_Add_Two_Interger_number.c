#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum of %d and %d = %d\n", num1, num2, sum);
    return 0;
}