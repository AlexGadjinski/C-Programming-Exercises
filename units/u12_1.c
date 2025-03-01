#include <stdio.h>
#include <math.h>

int primeNum(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int num1, num2, startNum, endNum;
    printf("Schreiben Sie ein Interval zwischen zwei Zahlen\nSchreiben Sie die erste Zahl: ");
    scanf("%d", &num1);
    printf("Schreiben Sie die zweite Zahl: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        startNum = num1;
        endNum = num2;
    } else {
        startNum = num2;
        endNum = num1;
    }

    for (int i = startNum; i <= endNum; i++) {
        int current = primeNum(i);
        if (current == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}
