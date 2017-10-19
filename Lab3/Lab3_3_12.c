#include <stdio.h>
#include <stdlib.h>

int main() {

    // Сторінка 25, Завдання: 12

    printf("Obrobka poslidovnostei drobovyx chysel.\n");
    printf("Pislya vvody kojnogo chysla natyskaite <Enter>");
    float suma;
    for (int i=1;i<=5;i++)
            {
            float number;
                printf("\n -> ");
            scanf("%f",&number);
            suma += number;
            printf("%f\n", suma/i);
        }
    system("PAUSE");
    return 0;
}