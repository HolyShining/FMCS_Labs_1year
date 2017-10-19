#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Сторінка: 17 Завдання: 23

int main() {

    // Опис змінних
    char p[5],q[5];

    // Введення значень p та q
    printf("Zadayte znachenna:\n");
    printf("Vvedit p ( True | False ) -> ");
    scanf("%s",&p);
    printf("Vvedit q ( True | False ) -> ");
    scanf("%s",&q);

    // Опис та введення значень x,y,z
    float x,y,z;
    printf("Vvedit x, y, z -> ");
    scanf("%f%f%f", &x,&y,&z);

    // Пошук мінімуму з 3 елементів
    float min=fabs(x);
    if (min>y) min=fabs(y);
    if (min>z) min=fabs(z);

    // Отримання логічного значення
    int check = min>x+y+z;

    // Вивід на екран згідно результату check
    switch (check)
    {
        case 0:{ printf("Result: %s", q); system("PAUSE"); return 0;}
        case 1:{ printf("Result: %s", p); system("PAUSE"); return 0;}
    };
}