#include <stdio.h>
int main(void) {
    char name[40];
    printf("Enter operator name: ");
    scanf("%39s", name);
    printf("Operator %s stopped the robot.\n", name);
    return 0;
}
