#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);

    if (a == 0) {
        printf("Keine quadratische Gleichung\n");
        if (b == 0 && c == 0) {
            printf("Unendlich viele Loesungen\n");
        } else if (b == 0) {
            printf("Keine Loesung\n");
        } else {
            printf("Die Wurzel ist = %lf\n", -c / (double) b);
        }
    } else {
        double disc = b*b - (double) 4*a*c;
        if (disc < 0) {
            printf("Imaginaere Loesung\n");
        } else if (disc == 0) {
            printf("Beide Wurzel sind gleich = %lf\n", -b / (2.0 * a));
        } else {
            double t = sqrt(disc);
            printf("Die erste Wurzel ist = %lf\n", (-b + t) / (2 * a));
            printf("Die zweite Wurzel ist = %lf\n", (-b - t) / (2 * a));
        }
    }
    
    return 0;
}
