#include <stdio.h>
#include <math.h>

int main () {
    double x1, y1, x2, y2, x3, y3;
    char symbol;
    scanf_s("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    scanf_s("%c", &symbol);

    double firstSide = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    double secondSide = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
    double thirdSide = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));

    if (symbol == 'u') {
        double perimeter = firstSide + secondSide + thirdSide;
        printf("%.2lf\n", perimeter);        
    } else if (symbol == 'f') {
        double area = fabs(x1 * y2 - x2 * y1 - x3 * y2 + x2 * y3 + x3 * y1 - x1 * y3) / 2;
        printf("%.2lf\n", area);
    } else {
        printf("Fehler - ungueltige Eingabe\n");
    }

    // switch (symbol) {
    //     case 'u':
    //         double perimeter = firstSide + secondSide + thirdSide;
    //         printf("%.2lf\n", perimeter);
    //         break;
    //     case 'f':
    //         double area = abs(x1 * y2 - x2 * y1 - x3 * y2 + x2 * y3 + x3 * y1 - x1 * y3) / 2;
    //         printf("%.2lf\n", area);
    //         break;
    //     default:
    //         printf("Fehler - ungueltige Eingabe\n");
    // }
    
    return 0;
}
