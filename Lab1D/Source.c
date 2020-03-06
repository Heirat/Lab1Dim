/*
���������� ���� ���������� ���-13��
������������ ������ �1. ���������� �������. 1.3 �, 2-2.
��������� ������� ����, ������� ���������� ������ ������� ������ �� ��������� ����.
����: ��������� � �������� ������� ����� ������������ ����.
�����: ������������������ �����, �������� ����.
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
	printf ("��������� ������� ����, ������� ���������� ������ ������� ������ �� ��������� ����.\n");
	printf ("������� ���������� ����� � ����\n");
	if (scanf ("%d", &m) == 0)
	{
		printf ("\n������������ ����\n");
		system("pause");
		return 1;
	}
	printf ("������� ���������� ������� � ����\n");
	if (scanf ("%d", &n) == 0)
	{
		printf ("\n������������ ����\n");
		system("pause");
		return 1;
	}
	
	if (n < 1 || m < 1)
	{
		printf ("������� ���� ������ ���� ��������������\n");
		system("pause");
		return 1;
	}

	printf ("������� ��������� � �������� ������� � ����������� ������-������� (������� � 1):\n");
	if (scanf ("%d%d%d%d", &start_r, &start_c, &fnsh_r, &fnsh_c) != 4)
	{
		printf ("������������ ����\n");
		system("pause");
		return 1;
	}
	if (start_r < 1 || start_c < 1 || fnsh_r < 1 || fnsh_c < 1 ||
		start_r > m || start_c > n || fnsh_r > m || fnsh_c > n)
	{
		printf ("�������� ���������� ������� �� ������� ����\n");
		system("pause");
		return 2;
	}

	Path[0] = (start_r-1) * n + start_c;
	i++;
	//� ����� ���� �� ���� � ����������� ������ (������ ����������)
	pos_r = start_r;
	pos_c = start_c;
	while (pos_c != fnsh_c || pos_r != fnsh_r)
	{
		if (pos_r == fnsh_r) //���� ������ �� ���� � �������
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
		if (pos_r > fnsh_r) //���� ������ ���� ������
		{			
			if (pos_c > fnsh_c) 
			{
				pos_c--;				
			}
			pos_r--;			
		}
		if (pos_r < fnsh_r) //���� ������ ���� ������
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