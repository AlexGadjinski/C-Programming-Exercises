#include <stdio.h>
#include <math.h>

int main() {
    long long int number;
    printf("Schreiben Sie eine Zahl: ");
    scanf_s("%lld", &number);

    if (number / 10 == 0) {
        printf("Es gibt keine wiederholende Ziffern in der Zahl %lld", number);
        return 0;
    }

    number = abs(number);
    for (int i = 0; i <= 9; i++) {
        int numberForDivision = number;
        int digitCount = 0;
        while (numberForDivision != 0) {
            if (numberForDivision % 10 == i) {
                digitCount++;
            }
            numberForDivision /= 10;
            if (digitCount == 2) {
                printf("Es gibt wiederholende Ziffern in der Zahl %lld", number);
                return 0;
            }
        }
    }
    printf("Es gibt keine wiederholende Ziffern in der Zahl %lld", number);

    return 0;
}
