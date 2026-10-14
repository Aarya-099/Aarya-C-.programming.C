#include <stdio.h>
int main(void) {
    int reading;
    printf("Enter reading from 0 to 100: ");
    scanf("%d", &reading);
    if (reading >= 0 && reading <= 100)
        printf("Reading is in range.\n");
    else
        printf("Reading is out of range.\n");
    return 0;
}
