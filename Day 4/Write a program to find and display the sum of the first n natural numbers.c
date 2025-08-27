#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum;
    printf("Enter a Number\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
