#include <stdio.h>

int main() {
    char symbol;
    printf("Schreiben Sie ein Zeichen: ");
    scanf_s("%c", &symbol);

    if (symbol >= 'A' && symbol <= 'Z') {
        printf("Das eingegebene Zeichen ist ein Grossbuchstabe.");
    } else {
        printf("Das eingegebene Zeichen ist kein Grossbuchstabe.");  
    }

    return 0;
}
