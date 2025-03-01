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

    averageValue = sum / measurementsNum;

    for (int i = 0; i < measurementsNum; i++) {
        for (int j = i + 1; j < measurementsNum; j++) {
            double firstNum = fabs(torqueValueArr[i] - averageValue);
            double secondNum = fabs(torqueValueArr[j] - averageValue);
            if (secondNum < firstNum) {
                double numToReplace = torqueValueArr[i];
                torqueValueArr[i] = torqueValueArr[j];
                torqueValueArr[j] = numToReplace;
            }
        }
    }
    for (int i = 0; i < measurementsNum; i++) {
        printf("%d. Wert: %lf; Absolute Abstand: %lf\n", i + 1, torqueValueArr[i], fabs(torqueValueArr[i] - averageValue));
    }

    printf("\nDer Mittelwert ist: %.2lf\n", averageValue);
    sum = 0;

    for (int i = 0; i < measurementsNum; i++) {
        sum += (averageValue - torqueValueArr[i]) * (averageValue - torqueValueArr[i]);
    }

    double result = sqrt(sum / measurementsNum - 1);

    printf("Die Abweichung ist: %.2lf", result);

    return 0;
}
