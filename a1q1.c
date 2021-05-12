#include <stdio.h>

int main() {
    float attackSpeed = 0.0;
    int damagePerHit = 0;
    double globalDamageMultiplier = 0.0;

    printf("Enter the number of attacks per second you make: ");
    scanf("%f", &attackSpeed);

    printf("Enter the amount of damage you do with each hit: ");
    scanf("%d", &damagePerHit);

    printf("Enter your global damage multiplier: ");
    scanf("%lf", &globalDamageMultiplier);

    printf("You will do %.2f damage per second to enemies.\n", attackSpeed * damagePerHit * globalDamageMultiplier);
}
