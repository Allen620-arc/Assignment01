/*
    Name: Allen Keettikkal
    NSID: alk423
    Student Number: 11278995
 */

#include <stdio.h>

int main() {
    float num2018 = 0, num2020 = 0;
    float priceIn2018[15], priceIn2020[15];
    FILE *fp;

    fp = fopen("food.txt", "r");

    fscanf(fp, "%f", &num2018);

    for (int line = 1; line < 15; line++) {
        priceIn2018[line] = num2018;
        priceIn2020[line] = num2020;
    }

    printf("%f \n", num2018);
    printf("%f \n", num2020);
    fclose(fp);

    return 0;
}