#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ��������� ��������� ��� ����������� ����������� �������� ����� � �������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ��������� ���������� ����� ��� ���� ����� �������������
    int secretNumber;
    int computerGuess = 0;
    int userGuess = 0;

    srand(time(NULL));

    printf("���� \"���� � ������\"\n\n");

    printf("�������� ������� ����:\n");
    printf("1. ��������� ���������� �����, �� ����������\n");
    printf("2. �� ����������� �����, ��������� ���������\n");
    int choice;
    scanf_s("%d", &choice);

    // ��������� ���������� �����
    if (choice == 1)
    {
        secretNumber = generateNumber();

        while (userGuess != secretNumber)
        {
            printf("������� ���� �������������: ");
            scanf_s("%d", &userGuess);

            int cows, bulls;
            countCowsAndBulls(secretNumber, userGuess, &cows, &bulls);

            printf("����: %d, ������: %d\n\n", bulls, cows);
        }

        printf("����������! �� ������� ����� %d!\n", secretNumber);
    }
    // ������������ ���������� �����
    else if (choice == 2)
    {
        printf("��������� ������������ 4-������� �����: ");
        scanf_s("%d", &secretNumber);

        while (computerGuess != secretNumber)
        {
            computerGuess = generateNumber();
            printf("��������� ������������ �����: %d\n", computerGuess);

            int cows, bulls;
            countCowsAndBulls(secretNumber, computerGuess, &cows, &bulls);

            printf("����: %d, ������: %d\n\n", bulls, cows);
        }

        printf("��������� ������ ����� %d!\n", secretNumber);
    }
    else
    {
        printf("�������� �����. ���������� �����.\n");
    }

    return 0;
}