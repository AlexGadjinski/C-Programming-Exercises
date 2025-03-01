#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char name[25];

    // четене на стринг, спира четенето, когато стигне до whitespace
    // scanf_s("%s", &name);

    // четене на стринг, включва и whitespace-овете (проблем е, че стрингът бива запазван на нови редове при команда Enter)
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf(name);

    
    return 0;
}
