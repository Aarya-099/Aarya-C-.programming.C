#include <stdio.h>
int main() {
    int n, count = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) count++;
        n /= 10;
    }
    printf("Odd digits = %d\n", count);
    return 0;
}
