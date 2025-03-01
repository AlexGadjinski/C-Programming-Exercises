#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Schreiben Sie ein Programm in C, das alle Elemente von einem Feld, die kleiner als der Quadratwurzel ein gegebener Parameter sind, 
// in einem zweiten Feld speichert. Die Elemente des zweiten Feldes werden ausgegeben.

int lengthArr() {
    int length;
    printf("Geben Sie die Anzahl der Elemente: ");
    scanf_s("%d", &length);

    while (length < 1) {
        printf("Geben Sie eine gueltige Zahl fuer die Anzahl der Elemente: ");
        scanf_s("%d", &length); 
    }

    return length;
}


double * inputArr(int length) {
    double * array = (double *)malloc(length * sizeof(double));
    for (int i = 0; i < length; i++) {
        printf("Geben Sie das %d. Element: ", i + 1);
        scanf_s("%lf", &array[i]);
    }
    return array;
}


void printOutputArr(int lengthOfArr, double inputArray[]) {
    double parameter;
    printf("Geben Sie das Parameter: ");
    scanf_s("%lf", &parameter);

    while (parameter < 0) {
        printf("Geben Sie eine gueltige Zahl fuer das Parameter: ");
        scanf_s("%lf", parameter);  
    }

    double squareOfParameter = sqrt(parameter);
    int newArrLength = 0;

    for (int i = 0; i < lengthOfArr; i++) {
        if (inputArray[i] < squareOfParameter) {
            newArrLength++;
        }
    }

    double outputArray[newArrLength];
    int index = 0;
    for (int i = 0; i < lengthOfArr; i++) {
        if (inputArray[i] < squareOfParameter) {
            outputArray[index] = inputArray[i];
            index++;
        }
    }

    printf("\nAusgabe: \n");
    for (int i = 0; i < newArrLength; i++) {
        printf("%.2lf ", outputArray[i]);
    }
}


int main () {
    int length = lengthArr();
    double * inputArray = inputArr(length);
    printOutputArr(length, inputArray);

    return 0;
}
