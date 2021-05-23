/*
    Name: Allen Keettikkal
    NSID: alk423
    Student Number: 11278995
 */

#include <stdio.h>

int main(){
    int weekNo;
    int num = 0;
    int weekShip[3];
    int sum = 0;

    int largestNum = 0;
    int smallestNum = 0;
    int averageNum = 0;

    FILE *fp;
    FILE *fp_out;

    fp = fopen("shipments.txt", "r");
    fscanf(fp, "%d", &weekNo);
    for (int line = 0; line < weekNo; line++) {
        fscanf(fp, "%d", &num);
        weekShip[line] = num;
    }
    fclose(fp);

    largestNum = weekShip[0];
    smallestNum = weekShip[0];

    for (int i = 1; i < weekNo; i++) {
        if (weekShip[i] > largestNum) {
            largestNum = weekShip[i];
        }
        if (weekShip[i] < smallestNum) {
            smallestNum = weekShip[i];
        }
        sum += weekShip[i];
    }

    averageNum = sum / weekNo;

    fp_out = fopen("a1q4output.txt", "w");
    scanf(fp_out, "%d", weekNo);

    fprintf(fp_out, "Largest shipment: %d cases \n", largestNum);
    fprintf(fp_out, "Smallest shipment: %d cases \n", smallestNum);
    fprintf(fp_out, "Average shipment: %d cases \n", averageNum);
    fclose(fp_out);

    return 0;
}