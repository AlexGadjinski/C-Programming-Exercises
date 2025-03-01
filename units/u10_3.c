#include <stdio.h>
#include <math.h>

int main () {
    int measurementsNum;
    double sum = 0;
    double averageValue = 0;

    printf("Schreiben Sie die Anzahl der Messungen: ");
    scanf("%d", &measurementsNum);

    double torqueValueArr[measurementsNum];

    for (int i = 0; i < measurementsNum; i++) {
        double torqueValue;
        printf("Schreiben Sie einen Drehmomentwert: ");
        scanf("%lf", &torqueValue);

        sum += torqueValue;
        torqueValueArr[i] = torqueValue;
    }

    for (int i = 0; i < measurementsNum; i++) {
        for (int j = i + 1; j < measurementsNum; j++) {
            if (torqueValueArr[j] < torqueValueArr[i]) {
                double numToReplace = torqueValueArr[i];
                torqueValueArr[i] = torqueValueArr[j];
                torqueValueArr[j] = numToReplace;
            }
        }
    }
    for (int i = 0; i < measurementsNum; i++) {
        printf("%d. Wert: %lf\n", i + 1, torqueValueArr[i]);
    }

    averageValue = sum / measurementsNum;
    printf("\nDer Mittelwert ist: %.2lf\n", averageValue);
    sum = 0;

    for (int i = 0; i < measurementsNum; i++) {
        sum += (averageValue - torqueValueArr[i]) * (averageValue - torqueValueArr[i]);
    }

    double result = sqrt(sum / measurementsNum - 1);

    printf("Die Abweichung ist: %.2lf", result);

    return 0;
}
