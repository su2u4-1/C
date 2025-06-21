#include <stdio.h>

int main() {
    int a, b, c;
    printf("Input 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0)
        printf("Invalid input. Sides must be positive integers.\n");
    else if (a + b <= c || a + c <= b || b + c <= a)
        printf("These sides do not form a triangle.\n");
    else if (a == b && b == c)
        printf("This is an equilateral triangle.\n");
    else if ((a == b && c < a + b) || (a == c && b < a + c) || (b == c && a < b + c))
        printf("This is an isosceles triangle.\n");
    else
        printf("This is a scalene triangle.\n");
}
