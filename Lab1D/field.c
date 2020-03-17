#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define MAX_SIZE 10000
int Read_Field_Size (int *n, int *m)
{
	printf ("Введите количество рядов в поле\n");
	if (scanf ("%d", m) == 0)
	{
		return 1;
	}
	printf ("Введите количество стобцов в поле\n");
	if (scanf ("%d", n) == 0)
	{
		return 1;
	}

	if (*n < 1 || *m < 1)
	{
		return 2;
	}
}

int Read_Field_Pos (int n, int m, int *start_row, int *start_col, int *end_row, int *end_col)
{

	printf ("Введите начальную и конечную позиции в координатах строка-столбец (начиная с 1):\n");
	if (scanf ("%d%d%d%d", start_row, start_col, end_row, end_col) != 4)
	{
		return 1;
	}
	if (*start_row < 1 || *start_col < 1 || *end_row < 1 || *end_col < 1 ||
		*start_row > m || *start_col > n || *end_row > m || *end_col > n)
	{
		return 2;
	}
}

void Get_Path (int n, int m, int start_row, int start_col, int end_row, int end_col, int path[MAX_SIZE], int *i)
{
	int pos_row = start_row;
	int pos_col = start_col;

	//Номер клетки = количество клеток в предыдущих рядах +
	//				 количество клеток в этом ряду
	path[0] = (start_row - 1) * n + start_col;
	(*i)++;

	//В цикле идем по полю в направлении клетки назначения
	while (pos_col != end_col || pos_row != end_row)
	{
		if (pos_row == end_row) //Если король на ряду с финишем
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
		if (pos_row > end_row) //Если король ниже финиша
		{
			if (pos_col > end_col)
			{
				pos_col--;
			}
			pos_row--;
		}
		if (pos_row < end_row) //Если король выше финиша
		{
			if (pos_col < end_col)
			{
				pos_col++;
			}
			pos_row++;
		}

		path[*i] = (pos_row - 1) * n + pos_col;
		(*i)++;
	}
}

