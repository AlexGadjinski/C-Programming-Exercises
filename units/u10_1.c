#include <stdio.h>

int main () {
    int measurementsNum;
    double maxTorqueValue = 0;
    int maxTorqueValueIndex = -1;
    double sum = 0;

    printf("Schreiben Sie die Anzahl der Messungen: ");
    scanf("%d", &measurementsNum);

    for (int i = 0; i < measurementsNum; i++) {
        double torqueValue;
        printf("Schreiben Sie einen Drehmomentwert: ");
        scanf("%lf", &torqueValue);
        printf("%d. Wert: %lf\n", i + 1, torqueValue);

        if (torqueValue > maxTorqueValue) {
            maxTorqueValue = torqueValue;
            maxTorqueValueIndex = i + 1;
        }
        sum += torqueValue;
    }

    printf("\nDer Mittelwert ist: %.2lf\n", sum / measurementsNum);
    printf("Maximale Wert %.2lf mit Nummer %d\n", maxTorqueValue, maxTorqueValueIndex);

    return 0;
}
