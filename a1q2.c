/*
    Name: Allen Keettikkal
    NSID: alk423
    Student Number: 11278995
 */

#include <stdio.h>

int main() {
    int n, rev = 0, remainder;
    printf("The secret passcode: \n");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Enter this to enter the door: %d", rev);
    return 0;
}