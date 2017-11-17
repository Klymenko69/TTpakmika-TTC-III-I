/*Після введення з клавіатури довільного рядка 
визначити і вивести на екран 
кількість латинських літер у ньому.*/
#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
bool f(int i) {
    return (isalpha(i));
}
int main() {
    string str;
    getline(cin,str);
    cout<<count_if(str.begin(),str.end(), f);
        system("pause");
    return 0;
}
