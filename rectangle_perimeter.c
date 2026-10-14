#include <stdio.h>

int main() {
    float length, width, perimeter;

    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);

    perimeter = 2 * (length + width);

    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
