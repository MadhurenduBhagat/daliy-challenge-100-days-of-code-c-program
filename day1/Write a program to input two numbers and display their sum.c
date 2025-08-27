#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum;
    printf("Enter the number 1: ");
    scanf("%d",&num1);
    printf("Enter the number 2: ");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("the sum of %d and %d is %d\n",num1,num2,sum);
    return 0;
}
