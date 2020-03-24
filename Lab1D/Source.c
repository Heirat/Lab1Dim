/*
���������� ���� ���������� ���-13��
������������ ������ �1. ���������� �������. 1.3 �, 2-2.
��������� ������� ����, ������� ���������� ������ ������� ������ 
�� ��������� ����.
����: ��������� � �������� ������� ����� ������������ ����.
�����: ������������������ �����, �������� ����.
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
	int input;
	int len = 0;
	int start_row, start_col, end_row, end_col;

	printf ("��������� ������� ����, ������� ���������� ������ ������� ������ �� ��������� ����.\n");
	
	if ((input = Read_field_size (&n, &m)) == ER_WRONG_INP)
	{
		printf ("������������ ����\n");
		system("pause");
		return 0;
	}
	else if (input == ER_INCORRECT_INP)
	{
		printf ("������� ���� ������ ���� ��������������\n");
		system("pause");
		return 0;
	}

	if ((input = Read_field_pos (n, m, &start_row, &start_col, &end_row, &end_col)) == ER_WRONG_INP)
	{
		printf ("������������ ����\n");
		system("pause");
		return 0;
	}
	else if (input == ER_INCORRECT_INP)
	{
		printf ("�������� ���������� ������� �� ������� ����\n");
		system("pause");
		return 0;
	}
	
	Get_path (n, m, start_row, start_col, end_row, end_col, path, &len);
	Print_path (path, len);	
	
	printf ("\n");
	system("pause");
	return 0;
}
/*
�����

1000 
1
1 1 5 1
=1 2 3 4 5

10
4
-2 -3 4 2
=�������� ���������� ������� �� ������� ����

-2
-1
=������� ���� ������ ���� ��������������

2
3
1 2 � 4
=������������ ����

10 10
7 5 10 1
=65 75 85 95 94 93 92 91


*/