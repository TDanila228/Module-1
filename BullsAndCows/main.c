#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Установка кодировки для правильного отображения русского языка в консоли
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Генерация случайного числа или ввод числа пользователем
    int secretNumber;
    int computerGuess = 0;
    int userGuess = 0;

    srand(time(NULL));

    printf("Игра \"Быки и коровы\"\n\n");

    printf("Выберите вариант игры:\n");
    printf("1. Компьютер загадывает число, вы угадываете\n");
    printf("2. Вы загадываете число, компьютер угадывает\n");
    int choice;
    scanf_s("%d", &choice);

    // Компьютер загадывает число
    if (choice == 1)
    {
        secretNumber = generateNumber();

        while (userGuess != secretNumber)
        {
            printf("Введите ваше предположение: ");
            scanf_s("%d", &userGuess);

            int cows, bulls;
            countCowsAndBulls(secretNumber, userGuess, &cows, &bulls);

            printf("Быки: %d, Коровы: %d\n\n", bulls, cows);
        }

        printf("Поздравляю! Вы угадали число %d!\n", secretNumber);
    }
    // Пользователь загадывает число
    else if (choice == 2)
    {
        printf("Загадайте разнозначное 4-значное число: ");
        scanf_s("%d", &secretNumber);

        while (computerGuess != secretNumber)
        {
            computerGuess = generateNumber();
            printf("Компьютер предполагает число: %d\n", computerGuess);

            int cows, bulls;
            countCowsAndBulls(secretNumber, computerGuess, &cows, &bulls);

            printf("Быки: %d, Коровы: %d\n\n", bulls, cows);
        }

        printf("Компьютер угадал число %d!\n", secretNumber);
    }
    else
    {
        printf("Неверный выбор. Попробуйте снова.\n");
    }

    return 0;
}