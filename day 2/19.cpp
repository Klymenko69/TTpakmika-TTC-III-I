/*In each column and on each line of the matrix P (n, n) one strictly holds the zero element.
 By rearranging the rows, we obtain the positions of all zeros along the main diagonal of the matrix. */
#include <iostream>
#include <stdio.h>
#define n 4
 
int main()
{
    setlocale( LC_ALL,"Russian" );
    int m[n][n],i,j,tmp,i1;
    printf("Введите 12 чисел\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&m[i][j]);
    printf("Наш масив\n");
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
            printf("%d\t",m[i][j]);
    }
 
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
            if(m[i][j]==0)  
            {
               for(i1=0;i1<n;i1++) 
               {
                   tmp=m[i][i1];
                   m[i][i1]=m[j][i1];
                   m[j][i1]=tmp;
               }
               break;
            }
 
    }
    printf("Сделаний масив\n");
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
            printf("%d\t",m[i][j]);
    }
system("pause"); 
return 0;
}
