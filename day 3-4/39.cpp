
#include <iostream>
using namespace std;
 
void sum_progression(int _a, int _d, int _n, int _count, int _sum){
    if(_count == _n)            
        cout << "Sum of the elements of progression: " << _sum << endl;
    else{
        _sum += _a;                 
        sum_progression(_a + _d, _d, _n, _count + 1, _sum);
    }
}
 
void search_term_progression(int _d, int _n, int _count, int _number){
    if(_count == _n - 1)
        cout << "desired element of the progression: " << _number << endl;
    else{
        search_term_progression(_d, _n, _count + 1, _number + _d);
    }
}
 
int main()
{
    int a, d, n, count(0);
 
    cout << "Enter the first element of progression: ";
        cin >> a;
 
    cout << "Enter the difference of progression: ";
        cin >> d;
 
    cout << "Enter the number of an element of progression: ";
        cin >> n;
 
    sum_progression(a, d, n, count, 0);
    search_term_progression(d, n, count, a);
 
    cout << "\n\n";
    system("pause");
    return 0;
}
