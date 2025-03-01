#include <stdio.h>
#include <math.h>

int main() {
    int input;
    printf("Schreiben Sie eine Ganzzahl: ");
    scanf_s("%d", &input);
    if (input < 0) {
        printf("-");
    }

    while (input != 0) {
        printf("%d", abs(input % 10));
        input /= 10;
    }

    return 0;
}
