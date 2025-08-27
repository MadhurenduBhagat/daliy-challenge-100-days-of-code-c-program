#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=2;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);
     c=a;
     a=b;
     b=c;
    printf("After swap %d %d",a,b);

    return 0;
}
