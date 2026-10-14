#include <stdio.h>
int main(void) {
    float temperature;
    printf("Enter temperature: ");
    scanf("%f", &temperature);
    if (temperature >= 40)
        printf("Temperature is high\n");
    else
        printf("Temperature is normal\n");
    return 0;
}
