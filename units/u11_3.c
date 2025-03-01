#include <stdio.h>
#include <math.h>

double squareRoot(int number, double boundar, double startValue);

int main () {
    double boundary;
    printf("Schreiben Sie eine vorhergegebene Genauigkeit: ");
    scanf("%lf", &boundary);
    while (boundary <= 0) {
        printf("Schreiben Sie eine gueltige Genauigkeit: ");
        scanf("%lf", &boundary);
    }

    int x;
    printf("Schreiben Sie den Wert von x: ");
    scanf("%d", &x);
    while (x <= 0) {
        printf("Schreiben Sie einen gueltigen Wert von x: ");
        scanf("%d", &x);
    }

    double startValue = 1;

    double newValue = squareRoot(x, boundary, startValue);
    while (fabs(newValue - startValue) >= boundary) {
        startValue = newValue;
        newValue = squareRoot(x, boundary, startValue);
    }

    return 0;
}


double squareRoot(int number, double boundary, double startValue) {

    double newValue = (number / startValue + startValue) / 2;
    printf("%.2f\n", newValue);

    return newValue;
}
