/*
 * Ackermann Function using Recursion
 * Computes A(m, n) recursively with input validation.
 * Demonstrates deep recursion (use small values only).
 */

#include <stdio.h>

// Recursive Ackermann Function
unsigned long long ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    if (n == 0) {
        return ackermann(m - 1, 1);
    }
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    int m, n;

    printf("=== Ackermann Function A(m, n) - Recursive ===\n");
    printf("WARNING: Grows extremely fast! Use small inputs.\n");
    printf("Safe: m <= 3, or m=4 and n<=1\n\n");

    printf("Enter m (>= 0): ");
    scanf("%d", &m);
    printf("Enter n (>= 0): ");
    scanf("%d", &n);

    if (m < 0 || n < 0) {
        printf("Error: m and n must be non-negative!\n");
        return 1;
    }

    if (m > 4 || (m == 4 && n > 1)) {
        printf("DANGER: Input too large! Will cause stack overflow.\n");
        printf("Max safe: A(4,1) = 65533\n");
        return 1;
    }

    printf("\nComputing A(%d, %d)...\n", m, n);

    unsigned long long result = ackermann(m, n);

    printf("A(%d, %d) = %llu\n", m, n, result);

    return 0;
}
