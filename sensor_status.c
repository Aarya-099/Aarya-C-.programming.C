#include <stdio.h>
int main(void) {
    int reading;
    printf("Enter sensor reading: ");
    scanf("%d", &reading);
    if (reading >= 0) printf("Sensor active\n");
    else printf("Check sensor\n");
    return 0;
}
