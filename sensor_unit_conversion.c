#include <stdio.h>
int main(void) {
    float centimeters;
    printf("Enter distance in centimeters: ");
    scanf("%f", &centimeters);
    printf("Distance in meters = %.2f\n", centimeters / 100);
    return 0;
}
