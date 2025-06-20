#include <stdio.h>

int main() {
    char c;
    int brace_count = 0;
    while ((c = getchar()) != EOF) {
        if (c == '{')
            brace_count++;
        else if (c == '}')
            brace_count--;
        if (brace_count < 0) {
            printf("Unmatched closing brace found.\n");
            return 1;
        }
    }
    if (brace_count > 0) {
        printf("Unmatched opening brace found.\n");
        return 1;
    } else if (brace_count < 0) {
        printf("Unmatched closing brace found.\n");
        return 1;
    }
    printf("All braces are matched.\n");
    return 0;
}