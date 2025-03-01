#include <stdio.h>

int main () {
    long long sum = 0;
    int current;

    while (scanf_s("%d", &current) != EOF) {
        sum += current;
    }

    printf("%lld", sum);
    return 0;
}
