#include <stdio.h>

int main () {
    int numCount;
    printf("Anzahl der Zahlen = ");
    scanf_s("%d", &numCount);

    long long sum = 0;
    int current;

    for (int i = 0; i < numCount; i++) {
        scanf_s("%d", &current);
        sum += current;
    }
    printf("%lld", sum);
    return 0;
}
