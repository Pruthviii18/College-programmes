#include <stdio.h>

int main()
{
    float t, f;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &t);
    f = (9.0 / 5.0) * t + 32;
    printf("The temperature in Fahrenheit is: %.2f\n", f);
    return 0;
}