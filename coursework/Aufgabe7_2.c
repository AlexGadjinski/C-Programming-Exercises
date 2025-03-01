#include <stdio.h>
#include <math.h>

//Schreiben Sie ein Programm in C, das die Abweichungen (als Absolutwerte) von dem Mittelwert der Elemente eines Feldes bestimmt 
//und diese in einem zweiten Feld speichert. Die Elemente des zweiten Feldes werden ausgegeben.

// p = |P - G|

int main () {
    int inputArrayLength;
    double averageValue = 0;

    printf("Schreiben Sie die Anzahl der Elemente: ");
    scanf_s("%d", &inputArrayLength);

    while (inputArrayLength <= 0) {
         printf("Schreiben Sie eine gueltige Zahl fuer die Anzahl der Elemente: ");
         scanf_s("%d", &inputArrayLength);
    }

    double inputArray[inputArrayLength];

    printf("Schreiben Sie die Elemente des Arrays: ");
    for (int i = 0; i < inputArrayLength; i++) {
        scanf_s("%lf", &inputArray[i]);
        averageValue += inputArray[i];
    }

    averageValue /= inputArrayLength;
    double outputArray[inputArrayLength];

    for (int i = 0; i < inputArrayLength; i++) {
        double deviation = fabs ((inputArray[i] - averageValue));
        outputArray[i] = deviation;
    }

    printf("\nAusgabe:\n");
    for (int i = 0; i < inputArrayLength; i++) {
        printf("%d. Element: %.2lf\n", i + 1, outputArray[i]);
    }
    return 0;
}
