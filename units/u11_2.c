#include <stdio.h>
#include <math.h>

double calculate(int x, int boundary);

int main () {
    int x;
    double boundary;
    printf("Schreiben Sie den Wert von x: ");
    scanf("%d", &x);

    printf("Schreiben Sie eine vorhergegebene Genauigkeit: ");
    scanf("%lf", &boundary);
    while (boundary <= 0) {
        printf("Schreiben Sie eine gueltige Genauigkeit: ");
        scanf("%lf", &boundary);
    }

    double sum = calculate(x, boundary);
    printf("Das Ergebnis ist: %.2f", sum);

    return 0;
}


double calculate(int x, int boundary) {
    double result = x;
    for (int i = 1; )
}
