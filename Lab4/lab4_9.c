#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    int countOfElements;

    printf("Vvedit kilkist elementiv masivy -> ");
    scanf("%d", &countOfElements);

    printf("Vvedit elementy masivy\n");

    int numbers[countOfElements],check[countOfElements],maxElement;

    for (int currentElement = 0; currentElement<countOfElements; currentElement++) {
        scanf("%d", &numbers[currentElement]);
        check[currentElement] = 0;
    };

    for (int currentElement = 0; currentElement<countOfElements; currentElement++) {
        if (check[currentElement] == 1) continue;
        for (int nextElement = 1; nextElement < countOfElements; nextElement++) {
            if (check[nextElement] == 1) continue;
            if (numbers[currentElement] == numbers[nextElement] && currentElement != nextElement) {
                check[currentElement] = 1;
                check[nextElement] = 1;
            } else maxElement = numbers[currentElement];
        }
    }

    for (int currentElement = 0; currentElement<countOfElements; currentElement++)
        if (maxElement<numbers[currentElement] && check[currentElement] == 0) maxElement = numbers[currentElement];

    printf("Max element z masiva(bez povtoren): %d", maxElement);

    system("PAUSE");
    return 0;
}
