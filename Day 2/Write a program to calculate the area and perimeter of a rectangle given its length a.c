#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area,perimeter,length,width;

    printf("enter the length of rectangle: ");
    scanf("%f",&length);
    printf("enter the width of rectangle: ");
    scanf("%f",&width);
    area= length*width;
    perimeter= 2*(length+width);
    printf("The area of rectangle is %f\n",area);
    printf("the perimeter of rectangle is %f\n",perimeter);

    return 0;
}
