#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    int countOfElements;

    printf("Vvedit kilkist elementiv masivy (do 400 elementiv) -> ");
    scanf("%d", &countOfElements);
    if (countOfElements > 400) {printf("Vu vvely zabagato elementiv!"); system("PAUSE"); return 0;}

    printf("Vvedit elementy masivy\n");

    int numbers[countOfElements];

    for (int currentElement = 0; currentElement<countOfElements; currentElement++)
        scanf("%d", &numbers[currentElement]);

    for (int currentElement = 0; currentElement<countOfElements; currentElement++)
        {
        int countOfRepeats = 0,
            newArrayElements = 0;

        for (int elementCheck = 0; elementCheck<countOfElements; elementCheck++)
            if (numbers[currentElement] == numbers[elementCheck]) countOfRepeats++;

        if (countOfRepeats >= 3)
            {
            int element = numbers[currentElement];
            for (int arrayChanger = 0; arrayChanger < countOfElements; arrayChanger++)
                if (numbers[arrayChanger] != element) numbers[newArrayElements++] = numbers[arrayChanger];
            countOfElements = newArrayElements;
            }
        }

    printf("Noviy masiv: \n");

    for (int currentElement = 0; currentElement<countOfElements; currentElement++)
        if (currentElement % 4 == 0 && currentElement !=0) printf("%d\n", numbers[currentElement]);
                                                      else printf("%d ", numbers[currentElement]);

    system("PAUSE");

    return 0;
}
