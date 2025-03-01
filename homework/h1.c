#include <stdio.h>
#include <math.h>

int main() {
    int sumOfNumbers = 0;
    int numCount = 0;

    while (1) {
        int currentNum;
        printf("Schreiben Sie eine Ganzzahl: ");
        scanf_s("%d", &currentNum);

        if (currentNum == -855) {
            break;
        }

        if (currentNum == 0) {
            numCount++;
            continue;
        }

        currentNum = abs(currentNum);
        while (currentNum != 0) {
            int digit = currentNum % 10;
            currentNum /= 10;

            sumOfNumbers += digit;
            numCount++;
        }
    }
    printf("%.2f", (double) sumOfNumbers / numCount);

    return 0;
}
