#include <stdio.h>
int main(void) {
    int reading;
    printf("Enter reading: ");
    scanf("%d", &reading);
    if (reading > 50)
        printf("Above limit.\n");
    else if (reading == 50)
        printf("Exactly at limit.\n");
    else
        printf("Below limit.\n");
    return 0;
}
