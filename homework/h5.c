#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    bool isPrime = true;
    printf("Schreiben Sie eine positive Ganzzahl: ");
    scanf_s("%d", &number);

    while (number <= 0) {
        printf("Schreiben Sie eine gueltige positive Ganzzahl: ");
        scanf_s("%d", &number);
    }

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        printf("Die Zahl ist eine Primzahl.");
    } else {
        printf("Die Zahl ist keine Primzahl.");  
    }

    return 0;
}
