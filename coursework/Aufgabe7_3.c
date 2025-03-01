// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// //Schreiben Sie ein Programm in C, das die Abweichungen (als Absolutwerte) von dem Mittelwert der Elemente eines Feldes bestimmt 
// //und diese in einem zweiten Feld speichert. Die Elemente des zweiten Feldes werden ausgegeben.

// //Alle Aufgaben müssen mit Hilfe Felder gelöst werden. Alle Werte (Elemente der Felder und zusätzliche Parameter) 
// //werden von der Tastatur eingegeben (außerhalb Werte, die explicit als konstante Werte vorgegeben werden). 
// //Eingabe, Bearbeitung der Felder und Ausgabe der Resultate muss mit selbst geschriebenen Funktionen erfolgen und ohne Nutzung globaler Variablen. 
// //Sie müssen selbst die Datentypen der Variablen bestimmen, so dass die Aufgabe korrekt gelöst wird. 

// //prozentuelle Abweichung
// //p = |P - G| / G * 100

// int *readArr() {
//     int size;
//     printf("Schreiben Sie die Anzahl der Elemente: ");
//     scanf_s("%d", &size);

//     while (size <= 0) {
//         printf("Schreiben Sie eine gueltige Zahl fuer die Anzahl der Elemente: ");
//         scanf_s("%d", &size);
//     }

//     // static double array[arrLength];
//     int *array;
//     array = (int*)malloc(size * sizeof(int));
//     printf("Schreiben Sie die Elemente des Arrays: ");
    
//     for (int i = 0; i < size; i++) {
//         scanf_s("%lf", &array[i]);
//     }

//     return array;
// }


// int *getDeviationArr(int *inputArr) {
//     int average = averageValue(inputArr);
//     int size = sizeof(inputArr) / sizeof(inputArr[0]);

//     static int *deviationArr;
//     deviationArr = (int*)malloc(size * sizeof(int));

//     for (int i = 0; i < size; i++) {
//         deviationArr[i] = fabs((inputArr[i] - average));
//     }

//     return deviationArr;
// }


// int averageValue(int *array) {
//     int size = sizeof(array) / sizeof(array[0]);
//     int sumOfElements = 0;
//     for (int i = 0; i < size; i++) {
//         sumOfElements += array[i];
//     }

//     return sumOfElements / size;
// }


// void printArray(int array[]) {
//     int size = sizeof(array) / sizeof(array[0]);

//     printf("\nAusgabe:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d. Element: %d\n", i + 1, array[i]);
//     }
//     return;
// }


// int main () {
//     int *inputArr = readArr();
//     int *deviationArr = getDeviationArr(inputArr);
//     printArray(deviationArr);

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// https://pastebin.com/yDJMrw0M

// Schreiben Sie ein Programm in C, das die Abweichungen (als Absolutwerte) von dem Mittelwert der Elemente eines Feldes bestimmt 
// und diese in einem zweiten Feld speichert. Die Elemente des zweiten Feldes werden ausgegeben.

int sizeArr() {
    int size;
    printf("Schreiben Sie die Anzahl der Elemente: ");
    scanf("%d", &size);

    while (size <= 0) {
        printf("Schreiben Sie eine gueltige Zahl fuer die Anzahl der Elemente: ");
        scanf("%d", &size); 
    }

    return size;
}


void readArr(double pArray[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Geben Sie das %d. Element: ", i + 1);
        scanf_s("%lf", &pArray[i]);
    }
}

/*void readArr(int size, double **pArray) {
    double * array = (double *)malloc(size * sizeof(double));
    for (int i = 0; i < size; i++) {
        printf("Geben Sie das %d. Element: ", i + 1);
        scanf_s("%lf", &array[i]);
    }
    *pArray = array;
}*/


double calculateAvr(double arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}


double *getDeviationArr(int size, double averageValue, double inputArray[], double resultArr[]) {
    for (int i = 0; i < size; i++) {
        resultArr[i] = fabs(inputArray[i] - averageValue);
    }
}


void printArr(double arr[], int size) {
    printf("\nDie Abweichungen sind:\n");
    for (int i = 0; i < size; i++) {
        printf("%.2lf\n", arr[i]);
    }
}


int main() {
    int size = sizeArr();
    double *inputArr = (double *)malloc(size * sizeof(double));
    readArr(inputArr, size);

    double averageValue = calculateAvr(inputArr, size);

    double *deviationArr = (double *)malloc(size * sizeof(double));
    getDeviationArr(size, averageValue, inputArr, deviationArr);

    printArr(deviationArr, size);
    free(inputArr); free(deviationArr);

    return 0;
}
