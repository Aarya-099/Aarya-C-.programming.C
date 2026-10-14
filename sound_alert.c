#include <stdio.h>
int main(void) {
    float sound;
    printf("Enter sound level: ");
    scanf("%f", &sound);
    if (sound >= 70)
        printf("Loud sound detected\n");
    else
        printf("Sound level is normal\n");
    return 0;
}
