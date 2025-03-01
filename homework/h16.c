#include <stdio.h>

int main() {
    int array[6];

    for (int i = 0; i < 6; i++) {
        printf("Schreiben Sie die %d. Zahl: ", i + 1);
        scanf_s("%d", &array[i]);
    }

    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (array[j] > array[i]) {
                int numToSwap = array[i];
                array[i] = array[j];
                array[j] = numToSwap;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
