#include <stdio.h>

int main () {
    char currentSymbol;
    int symbols = 0;
    int letters = 0;
    int numbers = 0;

    while (1) {
        currentSymbol = getchar();
        if (currentSymbol == EOF) {
            break;
        } else {
            if (currentSymbol == 'A') {
                letters++;
            } else if (currentSymbol >= '0' && currentSymbol <= '9') {
                numbers++;
            }
            if (currentSymbol != '\n') {
            symbols++;
            }
        }
    }

    printf("Anzahl der Symbole = %d\n", symbols);
    printf("Anzahl der Buchstabe 'A' = %d\n", letters);
    printf("Anzahl der Zahlen = %d\n", numbers);
    return 0;
}
