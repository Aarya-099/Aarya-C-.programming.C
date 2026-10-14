#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a word: ");
    scanf("%99s", str);

    printf("Length = %lu\n", (unsigned long)strlen(str));

    return 0;
}
