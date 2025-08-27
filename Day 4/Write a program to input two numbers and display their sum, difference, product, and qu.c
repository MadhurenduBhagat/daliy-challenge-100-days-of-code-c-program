#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,diff,product,quotient;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    diff=a-b;
    printf("difference=%d\n",diff);
    product=a*b;
    printf("product=%d\n",product);
    if(a==0 || b==0)
    {
        printf("not divisible\n");
    }
    else
    {
     quotient=a/b;
     printf("quotient=%d\n",quotient);
    }

    return 0;
}
