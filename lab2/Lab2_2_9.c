#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    // Сторінка 15, Завдання 9

int main() {

    // Опис координат для точки А
    float x1, y1;
    printf("Vvedit tochky A:\nx -> ");
    scanf("%f", &x1);
    printf("y -> ");
    scanf("%f", &y1);

    // Опис координат для точки В
    float x2, y2;
    printf("Vvedit tochky B:\nx -> ");
    scanf("%f", &x2);
    printf("y -> ");
    scanf("%f", &y2);

    // Опис координат для точки С
    float x3, y3;
    printf("Vvedit tochky C:\nx -> ");
    scanf("%f", &x3);
    printf("y -> ");
    scanf("%f", &y3);

    // Перевіка, чи точка А належить R
    if ( x1<0 || x1>=6 ) { printf("Tochka A ne nalejit R"); system("PAUSE"); return 0; };
    if ( y1<0 ) { printf("Tochka A ne nalejit R"); system("PAUSE"); return 0; };
    if ( y1*y1-x1<0 ) { printf("Tochka A ne nalejit R"); system("PAUSE"); return 0; };
    if ( y1-4.0/x1<0 ) { printf("Tochka A ne nalejit R"); system("PAUSE"); return 0; };

    // Перевіка, чи точка B належить R
    if ( x2<0 || x2>=6 ) { printf("Tochka B ne nalejit R"); system("PAUSE"); return 0; };
    if ( y2<0 ) { printf("Tochka B ne nalejit R"); system("PAUSE"); return 0; };
    if ( y2*y2-x2<0 ) { printf("Tochka B ne nalejit R"); system("PAUSE"); return 0; };
    if ( y2-4.0/x2<0 ) { printf("Tochka B ne nalejit R"); system("PAUSE"); return 0; };

    // Перевіка, чи точка C належить R
    if ( x3<0 || x3>=6 ) { printf("Tochka C ne nalejit R"); system("PAUSE"); return 0; };
    if ( y3<0 ) { printf("Tochka C ne nalejit R"); system("PAUSE"); return 0; };
    if ( y3*y3-x3<0 ) { printf("Tochka C ne nalejit R"); system("PAUSE"); return 0; };
    if ( y3-4.0/x3<0 ) { printf("Tochka C ne nalejit R"); system("PAUSE"); return 0; };

    // Обчислення площі та перевірка, чи лежать точки на одній прямій
    float squareRectangle = fabs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1))/2;
    if (squareRectangle==0) { printf("Tochky na odnyi pramiy!"); system("PAUSE"); return 0; };

    // Обчислення периметру та виведення на екран ( Пошук сторін + Формула Герона )
    printf("Perumetr: %.*f\n",2, sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))+sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))+sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)));
    // Виведення площі
    printf("Plosha: %.*f",2, squareRectangle);

    system("PAUSE");


    return 0;
}