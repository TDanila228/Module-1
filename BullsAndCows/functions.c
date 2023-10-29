#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define NUMBER_LENGTH 4

// Функция для генерации случайного 4-значного числа
int generateNumber()
{
    int number = 0;
    int digits[10] = { 0 }; // Массив для отслеживания уже использованных цифр

    for (int i = 0; i < NUMBER_LENGTH; i++)
    {
        int digit;
        do
        {
            digit = rand() % 10; // Генерируем случайную цифру
        } while (digits[digit]);

        digits[digit] = 1; // Отмечаем цифру, как использованную
        number = number * 10 + digit; // Добавляем цифру к числу
    }

    return number;
}

// Функция для подсчета количества коров и быков
void countCowsAndBulls(int secretNumber, int guess, int* cows, int* bulls)
{
    *cows = 0;
    *bulls = 0;
    int secretDigits[NUMBER_LENGTH];
    int guessDigits[NUMBER_LENGTH];

    // Разложение числа на цифры
    for (int i = NUMBER_LENGTH - 1; i >= 0; i--)
    {
        secretDigits[i] = secretNumber % 10;
        guessDigits[i] = guess % 10;
        secretNumber /= 10;
        guess /= 10;
    }

    // Подсчет коров и быков
    for (int i = 0; i < NUMBER_LENGTH; i++)
    {
        if (secretDigits[i] == guessDigits[i])
            (*bulls)++;
        else
        {
            for (int j = 0; j < NUMBER_LENGTH; j++)
            {
                if (secretDigits[i] == guessDigits[j])
                    (*cows)++;
            }
        }
    }
}