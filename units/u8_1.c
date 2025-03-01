#include <stdio.h>
#include <math.h>

int main () {
    double a, b, c;
    scanf_s("%lf", &a);
    scanf_s("%lf", &b);
    scanf_s("%lf", &c);

    if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b) {
        double p = (a + b + c) / 2;
        double area = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Die Flaeche ist = %lf\n", area);
        if (a == b && b == c) {
            printf("Das Dreieck ist gleichseitig\n");
        } else if (a == b || b == c || a == c) {
            printf("Das Dreieck ist gleichbockig\n");
        } else {
            printf("Das Dreieck ist ungleichseitig\n");
        }
    } else {
        printf("Die Werte bilden kein Dreieck\n");
    }
    
    return 0;
}
