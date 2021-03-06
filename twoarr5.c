#include <stdio.h>

/*
 *
    #2 задание:
    Заполните массив нулями, после чего заполните нечетные строки целыми числами,
    начиная с 1, числа должны идти по порядку.
    Т.е:
    0  0  0  0  0  0  0
    1  2  3  4  5  6  7
    0  0  0  0  0  0  0
    8  9  10 11 12 13 14
    И выведите его на экран.
 */

int main() {
    int i, j;             // для цикла
    int col = 7, row = 4; // количество столбцов и строк в массиве
    int array[row][col];  // сам массив
    int number = 1;       // точка отсчета чисел

    // Бежим по массиву и заполняем его числами
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if((i % 2) == 0) { array[i][j] = 0; }
            else { array[i][j] = number++; }
        }
    }

    // Выводим на печать наш массив
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}