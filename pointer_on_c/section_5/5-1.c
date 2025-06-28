#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != 0)
        putchar('A' <= c && c <= 'Z' ? c + 32 : c);

    return 0;
}
