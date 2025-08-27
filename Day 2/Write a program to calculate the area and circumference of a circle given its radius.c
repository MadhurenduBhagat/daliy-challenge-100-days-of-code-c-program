#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius,area,circumference;;
    printf("enter the radius of circle\n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("The area of circle is %f\n",area);
    printf("The circumference of circle is %f",circumference);
    return 0;
}
