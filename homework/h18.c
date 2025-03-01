#include <stdio.h>

int main() {
    int number;
    printf("Schreiben Sie eine positive Zahl: ");
    scanf_s("%d", &number);

    while (number <= 0) {
        printf("Schreiben Sie eine gueltige positive Zahl: ");
        scanf_s("%d", &number); 
    }

    printf("Die ungeraden Zahlen im Bereich 0 ... %d sind: ", number);
    for (int i = 1; i <= number; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
