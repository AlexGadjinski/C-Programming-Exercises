#include <stdio.h>
#include <math.h>

int main() {
    int numCount;
    printf("Schreiben Sie die Anzahl der Zahlen: ");
    scanf_s("%d", &numCount);

    while (numCount <= 0) {
        printf("Schreiben Sie eine gueltige Zahl: ");
        scanf_s("%d", &numCount);
    }

    int biggestNum;

    for (int i = 1; i <= numCount; i++) {
        int current;
        printf("Schreiben Sie die %d. Zahl: ", i);
        scanf_s("%d", &current);
        
        if (i == 1 || current > biggestNum) {
            biggestNum = current;
        }
    }

    printf("\nDie groesste Zahl ist: %d", biggestNum);

    return 0;
}
