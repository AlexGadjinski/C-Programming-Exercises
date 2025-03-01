#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    scanf_s("%lf", &a);
    scanf_s("%lf", &b);
    scanf_s("%lf", &c);

    printf("%0.2lf\n%lf\n%lf", a, b, c);
    return 0;
}
