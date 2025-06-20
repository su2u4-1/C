#include <stdio.h>

#include "./increment.h"
#include "./negate.h"

int main() {
    printf("Incrementing 10: %d\n", increment(10));
    printf("Incrementing 0: %d\n", increment(0));
    printf("Incrementing -10: %d\n", increment(-10));
    printf("Negating 10: %d\n", negate(10));
    printf("Negating 0: %d\n", negate(0));
    printf("Negating -10: %d\n", negate(-10));
}
