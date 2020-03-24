#pragma once
#ifndef _FIELD_H_
#define _FIELD_H_
#define MAX_SIZE 10000
#define ER_WRONG_INP 1 //Недопустимый ввод
#define ER_INCORRECT_INP 2 //Некорректное значение ввода
//Чтение и проверка размеров поля. n - столбцы, m - строчки
int Read_field_size (int *n, int *m);

//Чтение и проверка начальной и конечной позиции короля
int Read_field_pos (int n, int m, int *start_row, int *start_col, int *end_row, int *end_col);

//Вычисление пути, результат в массиве path длины len
void Get_path (int n, int m, int start_row, int start_col, int end_row, int end_col, int path[MAX_SIZE], int *len);

//Вывод пути
void Print_path (int path[MAX_SIZE], int len);

#endif
//Поменять название i на len, названия функций 

