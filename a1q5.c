/*
    Name: Allen Keettikkal
    NSID: alk423
    Student Number: 11278995
 */

#include <stdio.h>

int collatz(int n) {
    if (n % 2 == 0) {
        n = n / 2;
    }
    else {
        n = 3 * n + 1;
    }
    return n;
}

int run_collatz(int n) {
    int steps = 0;
    while (n > 1) {
        n = collatz(n);
        steps += 1;
    }
    printf("Reached the number 1 after %d steps", steps);
}

int main() {
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    collatz(num);
    run_collatz(num);
    return 0;
}