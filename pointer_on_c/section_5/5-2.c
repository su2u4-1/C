#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != 0) {
        if ('A' <= c && c <= 'M')
            putchar(c + 13);
        else if ('N' <= c && c <= 'Z')
            putchar(c - 13);
        else if ('a' <= c && c <= 'm')
            putchar(c + 13);
        else if ('n' <= c && c <= 'z')
            putchar(c - 13);
        else
            putchar(c);
    }

    return 0;
}
