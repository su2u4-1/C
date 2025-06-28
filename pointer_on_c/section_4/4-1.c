#include <math.h>
#include <stdio.h>

int main() {
    float t = 1, p = 0, n;
    printf("Enter a positive integer: ");
    scanf("%f", &n);
    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    } else if (n == 0) {
        printf("The square root of 0 is 0.\n");
        return 0;
    }
    do {
        p = t;
        t = (t + n / t) / 2;
        printf("t: %.15e, p: %.15e\n", t, p);
    } while (t != p);
    printf("The square root of %d is approximately %f\n", n, t);

    return 0;
}
