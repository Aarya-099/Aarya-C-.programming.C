#include <stdio.h>
int main(void) {
    float a, b, c;
    printf("Enter three readings: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Average = %.2f\n", (a + b + c) / 3);
    return 0;
}
