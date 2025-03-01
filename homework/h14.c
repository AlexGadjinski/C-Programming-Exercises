#include <stdio.h>

int main() {
    int number;
    long long int result = 0;
    printf("Schreiben Sie eine positive Zahl: ");
    scanf_s("%d", &number);

    while (number <= 0) {
        printf("Schreiben Sie eine gueltige positive Zahl: ");
        scanf_s("%d", &number);
    }

    for (int i = 1; i <= number; i++) {
        result += i;
    }

    if (result % 2 == 0) {
        printf("Die Summe %lld ist eine gerade Zahl.", result);
    } else {
        printf("Die Summe %lld ist eine ungerade Zahl.", result);
    }

    return 0;
}
