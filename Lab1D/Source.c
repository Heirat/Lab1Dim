/*
Червинский Артём Алексеевич ИВТ-13БО
Лабораторная работа №1. Одномерные массивы. 1.3 а, 2-2.
Программа находит путь, который необходимо пройти хромому королю 
по заданному полю.
Ввод: начальная и конечная позиция двумя координатами поля.
Вывод: последовательность чисел, задающая путь.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "field.h"
#define MAX_SIZE 10000

int main() 
{
	setlocale(LC_ALL, "RUS");

	int path[MAX_SIZE];
	int n, m;
	int i = 0;
	int start_row, start_col, end_row, end_col;
	int input;
	printf ("Программа находит путь, который необходимо пройти хромому королю по заданному полю.\n");
	
	if ((input = Read_Field_Size (&n, &m)) == 1)
	{
		printf ("Некорректный ввод\n");
		system("pause");
		return 1;
	}
	else if (input == 2)
	{
		printf ("Размеры поля должны быть положительными\n");
		system("pause");
		return 2;
	}

	if ((input = Read_Field_Pos (n, m, &start_row, &start_col, &end_row, &end_col)) == 1)
	{
		printf ("Некорректный ввод\n");
		system("pause");
		return 1;
	}
	else if (input == 2)
	{
		printf ("Заданные координаты выходят за границы поля\n");
		system("pause");
		return 2;
	}
	
	Get_Path (n, m, start_row, start_col, end_row, end_col, path, &i);

	for (int j = 0; j < i; j++)
	{
		printf ("%d ", path[j]);
	}
	
	printf ("\n");
	system("pause");
	return 0;
}
/*
Тесты

1000 
1
1 1 5 1
=1 2 3 4 5

10
4
-2 -3 4 2
=Заданные координаты выходят за границы поля

-2
-1
=Размеры поля должны быть положительными

2
3
1 2 а 4
=Некорректный ввод

10 10
7 5 10 1
=65 75 85 95 94 93 92 91
*/