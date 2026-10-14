#include <stdio.h>
int main(void) {
    float light;
    printf("Enter light reading: ");
    scanf("%f", &light);
    if (light >= 40)
        printf("Turn light ON\n");
    else
        printf("Turn light OFF\n");
    return 0;
}
