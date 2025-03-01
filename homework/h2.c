#include <stdio.h>

int main() {
    int numCount;
    printf("Schreiben Sie die Anzahl der Ziffern: ");
    scanf_s("%d", &numCount);

    while (numCount <= 0) {
        printf("Schreiben Sie eine gueltige Zahl fuer die Anzahl der Ziffern: ");
        scanf_s("%d", &numCount);
    }

    long long int firstNum = 1;
    long long int secondNum = 1;
    for (int i = 1; i <= numCount; i++) {
        printf("%lld ", firstNum);
        long long int currentNum = secondNum;
        secondNum = firstNum + secondNum;
        firstNum = currentNum;
    }
    
    return 0;
}
