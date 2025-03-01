#include <stdio.h>

int main() {
    long long int result = 1;
    int number;
    printf("Schreiben Sie eine Ganzzahl: ");
    scanf_s("%d", &number);

    while (number < 0) {
        printf("Schreiben Sie eine gueltige Eingabe: ");
        scanf_s("%d", &number);
    }

    for (int i = 1; i <= number; i++) {
        result *= i;
    }

    printf("Die Fakultaet von %d ist: %lld", number, result);

    return 0;
}
