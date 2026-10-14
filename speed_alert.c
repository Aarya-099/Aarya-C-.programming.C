#include <stdio.h>
int main(void) {
    float speed;
    printf("Enter robot speed: ");
    scanf("%f", &speed);
    if (speed >= 50)
        printf("Speed is high\n");
    else
        printf("Speed is safe\n");
    return 0;
}
