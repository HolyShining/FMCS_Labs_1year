#include <stdio.h>
#include <string.h>


int main() {
    char *str,*word;
    printf("Vvedit text: (English only) \n");
    gets(str);

    printf("Result:\n");

    for (word = strtok(str, " "); word != 0; word = strtok(0, " ")) {
        if (strlen(word) % 2 == 1) {
            for (int currElem = strlen(word) / 2 + 1; currElem < strlen(word); currElem++)
                word[currElem - 1] = word[currElem];
            word[strlen(word) - 1] = '\0';
        }
        printf("%s ", word);
    }

    return 0;
}
