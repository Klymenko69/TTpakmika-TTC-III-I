/*Дана строка. Подсчитать, сколько различных символов встречается
в ней. Вывести их на экран. */
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <conio.h>
 
int main(void){
    unsigned char buf[BUFSIZ], * p;
    int symbols[UCHAR_MAX + 1], i, cnt;
    
    printf("Stroka: ");
    if ( scanf("%[^\n]", buf) != 1 ){
        fprintf(stderr, "Oshibka!\n");
        return 1;
    }
    memset(symbols, 0, sizeof(symbols));
    for ( p = buf; *p; ++p )
        symbols[*p]++;
    
    printf("Symvoli: ");
    cnt = 0;
    for ( i = 0; i < UCHAR_MAX + 1; ++i ){
        if ( symbols[i] ){
            printf("%c", i);
            ++cnt;
        }
    }
    printf("\nVsogo: %d symbols.\n", cnt);
    getch ();
    return 0;
    
}
