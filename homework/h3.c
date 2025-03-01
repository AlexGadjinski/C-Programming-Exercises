#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int sum = 0;

    printf("Schreiben Sie eine Ganzzahl: ");
    scanf_s("%d", &number);

    if (number == 0) {
        printf("%d", sum);
        return 0;
    }

    while (number != 0) {
        int currentNum = abs(number % 10);
        sum += currentNum;
        number /= 10;
    }

    printf("%d", sum);
    return 0;
}
