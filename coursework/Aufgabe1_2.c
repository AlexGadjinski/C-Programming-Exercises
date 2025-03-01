#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// https://pastebin.com/9jFywQDC
// Schreiben Sie ein Programm in C, das alle Elemente von einem Feld, die kleiner als die Quadratwurzel 
// eines gegebenen Parameters sind, in einem zweiten Feld speichert. Die Elemente des zweiten Feldes werden ausgegeben.

void inputArr(int *pLength, double **pArray) {
    // printf("%p\n", pLength);
    // printf("%p\n", pArray);
    // printf("%p\n", *pArray);
    // printf("%p\n", &pArray);

    int inputLength;
    printf("Geben Sie die Anzahl der Elemente: ");
    scanf_s("%d", &inputLength);

    while (inputLength < 1) {
        printf("Geben Sie eine gueltige Zahl fuer die Anzahl der Elemente: ");
        scanf_s("%d", &inputLength);
    }
    *pLength = inputLength;

    double * array = (double *)malloc(inputLength * sizeof(double));
    for (int i = 0; i < inputLength; i++) {
        printf("Geben Sie das %d. Element: ", i + 1);
        scanf_s("%lf", &array[i]);
    }
    *pArray = array;
}


void outputArr(int inputArrLength, double inputArray[], int *pOutputArrLength, double **pOutputArray) {
    double parameter;
    printf("Geben Sie das Parameter: ");
    scanf_s("%lf", &parameter);

    while (parameter < 0) {
        printf("Geben Sie eine gueltige Zahl fuer das Parameter: ");
        scanf_s("%lf", &parameter);  
    }
    parameter = sqrt(parameter);

    int newArrLength = 0;
    for (int i = 0; i < inputArrLength; i++) {
        if (inputArray[i] < parameter) {
            newArrLength++;
        }
    }
    *pOutputArrLength = newArrLength;        


    double * resultArray = (double *)malloc(newArrLength * sizeof(double));
    int index = 0;
    for (int i = 0; i < inputArrLength; i++) {
        if (inputArray[i] < parameter) {
            resultArray[index] = inputArray[i];
            index++;
        }
    }
    *pOutputArray = resultArray;
}


void printArr(int length, double array[]) {
    printf("\nDie Elemente, die kleiner als die Quadratwurzel von dem gegebenen Parameter sind:\n");
    for (int i = 0; i < length; i++) {
        printf("%.2lf\n", array[i]);
    }
}


int main () {
    int inputLength = 0;
    double *pInputArray = NULL;

    // printf("%p\n", pInputArray);
    // printf("%p\n", &pInputArray);

    inputArr(&inputLength, &pInputArray);
    
    int outputLength;
    double *pOutputArray = NULL;
    outputArr(inputLength, pInputArray, &outputLength, &pOutputArray);
    printArr(outputLength, pOutputArray);

    return 0;
}
