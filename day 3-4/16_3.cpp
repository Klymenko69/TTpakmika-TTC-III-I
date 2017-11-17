
#include <iostream.h>
#include <math.h>
#include <cstdlib>

long double Func (long double x)
{
       return (log(x-3)/(pow(x,2)+3*x-1));
}

int main () {
    long double a = -5;
    long double b = 5;
    long double h = 0.6;
    cout << "Znachenia function y=f(x):\n";
    
while(a<=b)
{
cout << "x= " << a << "\nF(x)= " << Func(a) 
<< "\n" << endl;
a+=h;
}

system ("pause");
return 0;
} 
