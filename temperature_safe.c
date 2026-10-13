#include <stdio.h>
int main(void) {
    float temperature;
    printf("Enter temperature: ");
    scanf("%f", &temperature);
    if (temperature >= 30)
        printf("Cooling may be needed\n");
    else
        printf("No cooling needed\n");
    return 0;
}
