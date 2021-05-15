/*
    Name: Allen Keettikkal
    NSID: alk423
    Student Number: 11278995
 */

#include <stdio.h>

int main() {
    float pi = 3.14159265;
    float radius;

    printf("Enter the radius: \n");
    scanf("%f", &radius);

    printf("The surface area of the sphere is %.2f. \n", 4 * pi * radius * radius);
    printf("The volume of the sphere is %.2f. \n", (4 * pi * radius * radius * radius) / 3);
}
