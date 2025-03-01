#include <stdio.h>

int main() {
    char symbol;
    scanf("%c", &symbol);

    if (symbol >= '0' && symbol <= '9') {
        printf("Ziffer\n");
    } else if (symbol == ' ' || symbol == '\n' || symbol == '\t') {
        printf("Trennsymbol");
    } else {
        printf("Ein anderes Symbol");
    }
    
    // switch (symbol) {
    //     case '1':
    //     case '2':
    //     case '3':
    //     case '4':
    //     case '5':
    //     case '6':
    //     case '7':
    //     case '8':
    //     case '9':
    //         printf("Ziffer\n");
    //         break;
    //     case ' ':
    //     case '\n':
    //     case '\t':
    //         printf("Trennsymbol");
    //         break;
    //     default:
    //         printf("Ein anderes Symbol");
    // }

    return 0;
}
