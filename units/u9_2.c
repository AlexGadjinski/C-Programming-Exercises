#include <stdio.h>

int main () {
    long long sum = 0;
    
    // while (1) { 
    //     int num;
    //     scanf("%d", &num);

    //     if (num == -999) {
    //         break;
    //     } else {
    //         sum += num;
    //     }
    // }

    // for (int current = 0; current != -999; scanf_s("%d", &current)) {
    //     sum += current;
    // }

    do
    {
        int current;
        scanf_s("%d", &current);
        if (current == -999) {
            break;
        } else {
            sum += current;
        }
    } while (1);
    

    printf("%lld", sum);

    return 0;
}
