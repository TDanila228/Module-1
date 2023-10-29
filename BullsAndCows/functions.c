#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define NUMBER_LENGTH 4

// ������� ��� ��������� ���������� 4-�������� �����
int generateNumber()
{
    int number = 0;
    int digits[10] = { 0 }; // ������ ��� ������������ ��� �������������� ����

    for (int i = 0; i < NUMBER_LENGTH; i++)
    {
        int digit;
        do
        {
            digit = rand() % 10; // ���������� ��������� �����
        } while (digits[digit]);

        digits[digit] = 1; // �������� �����, ��� ��������������
        number = number * 10 + digit; // ��������� ����� � �����
    }

    return number;
}

// ������� ��� �������� ���������� ����� � �����
void countCowsAndBulls(int secretNumber, int guess, int* cows, int* bulls)
{
    *cows = 0;
    *bulls = 0;
    int secretDigits[NUMBER_LENGTH];
    int guessDigits[NUMBER_LENGTH];

    // ���������� ����� �� �����
    for (int i = NUMBER_LENGTH - 1; i >= 0; i--)
    {
        secretDigits[i] = secretNumber % 10;
        guessDigits[i] = guess % 10;
        secretNumber /= 10;
        guess /= 10;
    }

    // ������� ����� � �����
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