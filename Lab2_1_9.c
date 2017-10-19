#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
        Сторінка 11, Завдання 9:
        Написати програму, яка виводить приклад для множення двох однозначних чисел,
        запитує відповідь користувача, перевіряє його і виводить повідомлення 
        "Правильно" чи "Ви помилились" і правильний результат.
    */

    // Ввід змінних
   int
    firstNumber = 1 + rand() % 9, // 1 < Перше число <= 9
    secondNumber = 1 + rand() % 9, // 1 < Друге число <= 9
    HumanResult; // Змінна для вводу користувача

    // Блок введення
    printf("Skilky byde %d*%d? -> ",firstNumber, secondNumber);
    scanf("%d", &HumanResult);

    // Перевірка на валідність значення та виведення результату
    if (firstNumber*secondNumber == HumanResult) printf("Pravulno!");
    else printf("Vu pomululys! %d*%d=%d",firstNumber,secondNumber,firstNumber*secondNumber);

    system("PAUSE");

    return 0;
}