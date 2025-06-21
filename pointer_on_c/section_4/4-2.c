#include <stdio.h>

int main() {
    int p[50] = {2};
    int index = 1;
    for (int i = 3; i < 100; i += 2) {
        int is_prime = 1;
        for (int j = 0; j < index; j++) {
            if (!(i % p[j])) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            p[index++] = i;
        }
    }
    for (int i = 0; i < index; i++) {
        printf("%d, ", p[i]);
    }
    return 0;
}
