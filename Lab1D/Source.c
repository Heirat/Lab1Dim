/*
Червинский Артём Алексеевич ИВТ-13БО
Лабораторная работа №1. Одномерные массивы. 1.3 а, 2-2.
Программа находит путь, который необходимо пройти хромому королю по заданному полю.
Ввод: начальная и конечная позиция двумя координатами поля.
Вывод: последовательность чисел, задающая путь.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define MAX_SIZE 1000

int main() {
	setlocale(LC_ALL, "RUS");

	int Path[MAX_SIZE];
	int n, m;
	int i = 0;
	int start_r, start_c, fnsh_r, fnsh_c, pos_r, pos_c;
	printf ("Программа находит путь, который необходимо пройти хромому королю по заданному полю.\n");
	printf ("Введите количество рядов в поле\n");
	if (scanf ("%d", &m) == 0)
	{
		printf ("\nНекорректный ввод\n");
		system("pause");
		return 1;
	}
	printf ("Введите количество стобцов в поле\n");
	if (scanf ("%d", &n) == 0)
	{
		printf ("\nНекорректный ввод\n");
		system("pause");
		return 1;
	}
	
	if (n < 1 || m < 1)
	{
		printf ("Размеры поля должны быть положительными\n");
		system("pause");
		return 1;
	}

	printf ("Введите начальную и конечную позиции в координатах строка-столбец (начиная с 1):\n");
	if (scanf ("%d%d%d%d", &start_r, &start_c, &fnsh_r, &fnsh_c) != 4)
	{
		printf ("Некорректный ввод\n");
		system("pause");
		return 1;
	}
	if (start_r < 1 || start_c < 1 || fnsh_r < 1 || fnsh_c < 1 ||
		start_r > m || start_c > n || fnsh_r > m || fnsh_c > n)
	{
		printf ("Заданные координаты выходят за границы поля\n");
		system("pause");
		return 2;
	}

	Path[0] = (start_r-1) * n + start_c;
	i++;
	//В цикле идем по полю в направлении финиша (клетки назначения)
	pos_r = start_r;
	pos_c = start_c;
	while (pos_c != fnsh_c || pos_r != fnsh_r)
	{
		if (pos_r == fnsh_r) //Если король на ряду с финишем
		{
			if (pos_c > fnsh_c)
			{
				pos_c--;
			}
			else
			{
				pos_c++;
			}
		}
		if (pos_r > fnsh_r) //Если король ниже финиша
		{			
			if (pos_c > fnsh_c) 
			{
				pos_c--;				
			}
			pos_r--;			
		}
		if (pos_r < fnsh_r) //Если король выше финиша
		{
			if (pos_c < fnsh_c)
			{
				pos_c++;
			}
			pos_r++;			
		}

		Path[i] = (pos_r - 1) * n + pos_c;
		i++;
	} 
	
	for (int j = 0; j < i; j++)
	{
		printf ("%d ", Path[j]);
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