/*
    Name: Allen Keettikkal
    NSID: alk423
    Student Number: 11278995
 */

#include <stdio.h>

int collatz(int n) {
    int steps = 0;
    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = 3 * n + 1;
        }
        steps += 1;
    }
    printf("The value received was %d after %d steps\n", n, steps);
    return 0;
}

int main() {
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    collatz(num);
    return 0;
}