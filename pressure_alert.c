#include <stdio.h>
int main(void) {
    float pressure;
    printf("Enter pressure: ");
    scanf("%f", &pressure);
    if (pressure >= 80)
        printf("Pressure is high\n");
    else
        printf("Pressure is normal\n");
    return 0;
}
