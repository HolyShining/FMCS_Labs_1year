#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // Сторінка 19, Завдання: 9

    float x,a,e;

    printf("Vvedit x,a,e -> ");
    scanf("%f%f%f", &x,&a,&e);

    float previous = 0, suma = 0, current=0;

    int first=1,k = 0, f=1;

    while (fabs(previous-current)>=e || first == 1)
        {
            previous = current;
            k++;
            current = (1/pow(a+x,k))/(pow(a,2*k)+f);
            suma += current;
            f*=k;
            first = 0;
        };
    printf("Suma: %f, dodankiv: %d", suma, k);
    system("PAUSE");
    return 0;
}