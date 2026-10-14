#include <stdio.h>
int main(void) {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Fahrenheit = %.2f\n", celsius * 9 / 5 + 32);
    return 0;
}
