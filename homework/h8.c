#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    printf("Schreiben Sie eine Zahl: ");
    scanf_s("%d", &number);

    printf("Die Binaerdarstellung der Zahl %d ist: ", number);
    int totalElements = 0;
    int array[4];
    int index = 0;
    int *pResultArr = array;
    
    while (number != 0) {
        int remainder = number % 2;
        number = number / 2;

        array[index] = remainder;
        index++;
        totalElements++;

        if (index == 4) {
            int newArr[totalElements];
            if (totalElements > 4) {
                for (int i = 0; i < index; i++) {
                    newArr[i] = pResultArr[i];
                }
                for (int i = totalElements - index; i < totalElements; i++) {
                    newArr[i] = array[i % 4];
                }        
            } else {
                for (int i = 0; i < index; i++) {
                    newArr[i] = pResultArr[i];
                }
            }
            pResultArr = newArr;
            index = 0;

            //print
            printf("\n");
            for (int i = totalElements - 1; i >= 0; i--) {
                printf("%d", pResultArr[i]);
            }
            printf("\n");
            //print

        } else if (number == 0 && totalElements > 4) {
            int newArr[totalElements + 4];
            for (int i = 0; i < totalElements - index; i++) {
                newArr[i] = pResultArr[i];
            }
            for (int i = totalElements - index; i < totalElements; i++) {
                newArr[i] = array[i % 4];
            }
        }
    }

    // for (int i = totalElements - 1; i >= 0; i--) {
    //     printf("%d ", *(pResultArr + i));
    // }
    for (int i = totalElements - 1; i >= 0; i--) {
        printf("%d ", pResultArr[i]);
    }
    // printf("\n");
    // while(1) {
    //     printf("%d", pResultArr[0]);
    //     pResultArr++;
    // }
 

    return 0;
}
