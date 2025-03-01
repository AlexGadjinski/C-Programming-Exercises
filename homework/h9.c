#include <stdio.h>
#include <math.h>

int main() {
    long long int number;
    int result = 0;
    printf("Schreiben Sie eine Zahl: ");
    scanf_s("%lld", &number);

    printf("Die Dezimaldarstellung der Zahl %lld ist: ", number);

    int power = 0;

    while (number != 0) {
       int currentNum = number % 10;
       number /= 10;

       result += currentNum * pow(2, power);
       power++;
    }
    printf("%d", result);

    return 0;
}
