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

	int Field[MAX_SIZE];
	int n, m;
	int start_r, start_c, fnsh_r, fnsh_c;

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

	printf ("Введите начальную и конечную позиции в координатах строка-столбец:\n");
	if (scanf ("%d%d%d%d", &start_r, &start_c, &fnsh_r, &fnsh_c) != 4)
	{
		printf ("\nНекорректный ввод\n");
		system("pause");
		return 1;
	}



	system("pause");
	return 0;
}
