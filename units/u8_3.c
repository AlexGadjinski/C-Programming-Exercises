#include <stdio.h>

int main()
{
    int numOfDay;
    scanf("%d", &numOfDay);
    if (numOfDay >= 1 && numOfDay <= 5)
    {
        printf("Werktag\n");
    }
    else if (numOfDay >= 6 && numOfDay <= 7)
    {
        printf("Wochenende\n");
    }
    else
    {
        printf("Fehler - ungueltige Eingabe\n");
    }

    // switch (numOfDay) {
    //     case 1:
    //     case 2:
    //     case 3:
    //     case 4:
    //     case 5:
    //         printf("Werktag\n");
    //         break;
    //     case 6:
    //     case 7:
    //         printf("Wochenende\n");
    //         break;
    //     default:
    //         printf("Fehler - ungueltige Eingabe\n");
    // }

    return 0;
}
