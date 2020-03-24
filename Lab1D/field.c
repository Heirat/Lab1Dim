#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define MAX_SIZE 10000
#define ER_WRONG_INP 1 //Недопустимый ввод
#define ER_INCORRECT_INP 2 //Некорректное значение ввода
int Read_field_size (int *n, int *m)
{
	printf ("Введите количество рядов в поле\n");
	if (scanf ("%d", m) == 0)	
		return ER_WRONG_INP;
	
	printf ("Введите количество стобцов в поле\n");
	if (scanf ("%d", n) == 0)
		return ER_WRONG_INP;

	if (*n < 1 || *m < 1)
		return ER_INCORRECT_INP;
	
}

int Read_field_pos (int n, int m, int *start_row, int *start_col, int *end_row, int *end_col)
{
	printf ("Введите начальную и конечную позиции в координатах строка-столбец (начиная с 1):\n");
	if (scanf ("%d%d%d%d", start_row, start_col, end_row, end_col) != 4)
		return ER_WRONG_INP;

	if (*start_row < 1 || *start_col < 1 || *end_row < 1 || *end_col < 1 ||
		*start_row > m || *start_col > n || *end_row > m || *end_col > n)
		return ER_INCORRECT_INP;
}

void Get_path (int n, int m, int start_row, int start_col, int end_row, int end_col, int path[MAX_SIZE], int *len)
{
	int pos_row = start_row;
	int pos_col = start_col;

	//Номер клетки = количество клеток в предыдущих рядах +
	//				 количество клеток в этом ряду
	path[0] = (start_row - 1) * n + start_col;
	(*len)++;

	//В цикле идем по полю в направлении клетки назначения
	while (pos_col != end_col || pos_row != end_row)
	{
		//Если король на ряду с финишем
		if (pos_row == end_row) 
		{
			if (pos_col > end_col)
			{
				pos_col--;
			}
			else
			{
				pos_col++;
			}
		}
		//Если король ниже финиша
		if (pos_row > end_row) 
		{
			if (pos_col > end_col)
			{
				pos_col--;
			}
			pos_row--;
		}
		//Если король выше финиша
		if (pos_row < end_row) 
		{
			if (pos_col < end_col)
			{
				pos_col++;
			}
			pos_row++;
		}

		path[*len] = (pos_row - 1) * n + pos_col;
		(*len)++;
	}
}

void Print_path (int path[MAX_SIZE], int len)
{
	for (int j = 0; j < len; j++)
	{
		printf ("%d ", path[j]);
	}
}

