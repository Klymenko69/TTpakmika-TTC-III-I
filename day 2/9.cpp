/* The entry of the elements of the matrix A (m, n) is performed arbitrarily with the triples 
of numbers. <i,j,a> The end of the input is indicated by three zeros: <0,0,0>, Check the correctness of this input: 
whether all elements are entered, there are no attempts to re-enter or indicate non-existing coordinates i and j .*/
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

const int m = 2;
const int n = 3;
void InitMatr (int ar[][n]);
int  InputMatr(int* row, int* col, int* val, int ar[][n]);
int  Validata (int row, int col, int val, int ar[][n]); 
void PrintMatr(int ar[][n]);
int main()
{
  setlocale (LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    int  matr[m][n];
    int  nRow, nCol, nVal;
    int  rem;
    char ch;
    InitMatr(matr);
    
    puts("Для выхода из программы введите через пробел три ноля.");
    puts("------------------------------------------------------");
    puts("");
    do 
    {
        rem = InputMatr(&nRow, &nCol, &nVal, matr);
        if(rem && matr[0][0] == 0)
        {
          getch();
            printf("Остались %d не введённых элементов. Продолжить ввод (y[es] / n[o])?  ", rem);
            ch = getchar();
            if(ch == 'y' || ch == 'Y')
               matr[0][0] = -1;
        }
    }while(matr[0][0] != 0);
    puts("\n\nМатрица: ");
    puts("---------\n");
    PrintMatr(matr);
    system ("pause");
    return 0;
}
void InitMatr(int ar[][n])
{
    int i, j;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            ar[i][j] = -1;
}
int InputMatr(int* row, int* col, int* val, int ar[][n])
{
    int Ok;
    char ch;
    static int count = m * n - 1;
    do 
    {        
        printf("Введите через пробел номер строки, номер колонки и значение элемента:  ");
        scanf("%d %d %d", row, col, val);
        getch();
        Ok = Validata(*row, *col, *val, ar);
        if(Ok)
        {
            if(ar[*row][*col] == -1 && (*row || *col))
                count--;
            if(ar[*row][*col] > -1)
            {
                printf("Значение с такими индексами уже существует и равно %d.\n", ar[*row][*col]);
                printf("Хoтите заменить его (y[es] / n[o])?  ");
                ch = getchar();
                if(ch == 'y' || ch == 'Y')
                {
                    ar[*row][*col] = *val;
                    puts("Значение элемента массива заменено на новое.");
                }        
            }
            else
                ar[*row][*col] = *val;
        }
        PrintMatr(ar);
    }while(!Ok);
    return count;
}
void PrintMatr(int ar[][n])
{
    int i, j;
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(ar[i][j] < 0)
                printf("   *");
            else
                printf("%4d", ar[i][j]);
        }
        puts("");
    }
}
int Validata(int row, int col, int val, int ar[][n])
{
    if(row < 0 || row > m - 1 || col < 0 || col > n - 1)
    {
        puts("Несуществующие координаты. Попробуйте ещё раз.");
        
        return 0;
    }
    
    return 1;
}
