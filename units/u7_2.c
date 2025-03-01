#include <stdio.h>

int main() {
    int fahrenheit;
    scanf("%d", &fahrenheit);
    double celsius = (5.00/9)*(fahrenheit - 32);
    printf("%.2f", celsius);

    return 0;
}
