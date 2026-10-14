#include <stdio.h>

int main() {
    int n, i, j, prime;
    
    printf("Enter a number:\n");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("No prime numbers less than 2.\n");
        return 0;
    }
    
    printf("Prime numbers up to %d are:\n", n);
    
    // Outer loop to go through numbers from 2 to n
    for (i = 2; i <= n; i++) {
        prime = 1; // Assume 'i' is prime initially (1 = true)
        
        // Inner loop to check divisibility from 2 up to i-1
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0; // Found a divisor, so it's not prime (0 = false)
                break;     // Exit the inner loop early
            }
        }
        
        // If 'prime' is still 1, 'i' is a prime number
        if (prime == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}