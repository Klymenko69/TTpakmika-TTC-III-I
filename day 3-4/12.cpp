
#include <stdio.h>
 
unsigned count_evens(const int* _f, const int* _l){
    unsigned n = 0;
    while(_f != _l){
        if((*_f++ & 1) == 0)
            ++n;
    }
    return n;
}
 
int main(){
    unsigned n;
    int a[] = { 1, 2,3 , 4, 5,6,7,8 };
    int b[] = { 1,2,3,4, 5, 6, 7, 8};
 
    printf("count evens: %u\n", count_evens(a, a + sizeof(a)/sizeof(a[0])));
 
    n = sizeof(b)/sizeof(b[0]);
    printf("count  odds: %u\n", n - count_evens(b, b + n)); 
    getchar();
    return 0;
}
