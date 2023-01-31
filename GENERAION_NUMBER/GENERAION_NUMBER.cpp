#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m;
    printf("Введите кол-во строк: ");
    scanf("%i", &n);
    printf("Введите кол-во столбцов: ");
    scanf("%i", &m);

    printf("Введите элементы: \n");
    int mas[100][100];
    srand(time(NULL));  // Инициализируем генератор псевдослучайных чисел!
    for (int i = 0; i < n; i++)  // Заполняем двумерный массив псевдослучайными числами от -2 до 7!
    {
        for (int j = 0; j < m; j++)
        {
            mas[i][j] = -2 + rand() % 7;
        }
    }

    printf("\n\n");

    for (int i = 0; i < n; i++)   // Выводим двумерный массив в консоли!
    {
        for (int j = 0; j < m; j++)
        {
            printf("%3i", mas[i][j]);
        }
        printf("\n");
    }
}