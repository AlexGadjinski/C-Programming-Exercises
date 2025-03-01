#include <stdio.h>
#include <math.h>

int main() {
    double number;
    printf("Schreiben Sie eine Zahl: ");
    scanf_s("%lf", &number);

    if (number < 0) {
        printf("Das ist keine Quadratzahl.");
        return 0;
    }

    double squareRootOfNum = sqrt(number);

    if ((int) squareRootOfNum != squareRootOfNum) {
        printf("Das ist keine Quadratzahl.");
    } else {
        printf("Das ist eine Quadratzahl.");
    }

    return 0;
}
