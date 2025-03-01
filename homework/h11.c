#include <stdio.h>
#include <math.h>

int main() {
    long long int result = 0;
    int number;
    printf("Schreiben Sie eine natuerliche Zahl: ");
    scanf_s("%d", &number);

    while (number <= 0) {
        printf("Schreiben Sie eine gueltige natuerliche Zahl: ");
        scanf_s("%d", &number);
    }

    for (int i = 1; i <= number; i++) {
        result += pow(i, 3);
    }

    printf("Die Summe ist: %lld", result);
    
    return 0;
}
