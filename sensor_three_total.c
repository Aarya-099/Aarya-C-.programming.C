#include <stdio.h>
int main(void) {
    int a, b, c;
    printf("Enter three sensor values: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Total = %d\n", a + b + c);
    return 0;
}
