#include <stdio.h>
int main(void) {
    float voltage;
    printf("Enter voltage: ");
    scanf("%f", &voltage);
    if (voltage >= 12)
        printf("Voltage is high\n");
    else
        printf("Voltage is within limit\n");
    return 0;
}
