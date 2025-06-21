#include <stdio.h>

int main() {
    double t = 1, p = 0;
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    while (t != p) {
        p = t;
        t = (t + n / t) / 2;
    }
    printf("The square root of %d is approximately %f\n", n, t);

    return 0;
}
