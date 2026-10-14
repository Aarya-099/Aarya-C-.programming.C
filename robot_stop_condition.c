#include <stdio.h>
int main(void) {
    int obstacle;
    printf("Enter 1 if obstacle is detected, otherwise 0: ");
    scanf("%d", &obstacle);
    if (obstacle == 1)
        printf("Stop robot.\n");
    else
        printf("Continue moving.\n");
    return 0;
}
