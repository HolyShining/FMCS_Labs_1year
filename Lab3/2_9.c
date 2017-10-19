#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Сторінка 19, Завдання: 9

int main() {
    float x,a,e;

    int k = 0, f=1;

    printf("Vvedit x,a,e -> ");
    scanf("%f%f%f", &x,&a,&e);

    float previous = 0, suma = 0, current=0;



    do {
        previous = current;
        k++;
        current = (1 / pow(a + x, k)) / (pow(a, 2 * k) + f);
        suma += current;
        f *= k;
    }
        while (fabs(previous-current)>=e);
    printf("Suma: %f, dodankiv: %d", suma, k);
    system("PAUSE");
    return 0;
}
