#pragma once
#ifndef _FIELD_H_
#define _FIELD_H_
#define MAX_SIZE 10000
//Чтение размеров поля. n - столбцы, m - строчки
int Read_Field_Size (int *n, int *m);
//Чтение начальной и конечной позиции короля
int Read_Field_Pos (int n, int m, int *start_row, int *start_col, int *end_row, int *end_col);
//Вычисление пути, результат в массиве path длины i
void Get_Path (int n, int m, int start_row, int start_col, int end_row, int end_col, int path[MAX_SIZE], int *i);

#endif


