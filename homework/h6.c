#include <stdio.h>
#include <math.h>

int main() {
    int number;
    printf("Schreiben Sie eine Ganzzahl: ");
    scanf_s("%d", &number);

    printf("Die Primfaktoren von %d sind: ", number);

    number = abs(number);
    int numForDivision = 2;

    while (number != 1) {
        if (number % numForDivision == 0) {
            printf("%d ", numForDivision);
            while (number % numForDivision == 0) {
                number /= numForDivision;
            }
        }
        numForDivision++;
    }

    return 0;
}
