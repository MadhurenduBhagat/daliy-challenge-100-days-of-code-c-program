#include <stdio.h>

int main()
{
    float fahrenheit,celsius;
    printf("enter the temperature in celsius: ");
    scanf("%f",&celsius);
    fahrenheit= ((celsius*(9.0/5))+32);
    printf("the temperature in fahrenheit is %f",fahrenheit);
    return 0;
}
