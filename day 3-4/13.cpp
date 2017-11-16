/*Дані довжини а, b і c сторін деякого трикутника. Знайти медіани трикутника, сторонами якого є медіани початкового трикутника. 
Довжина медіани, проведеної до сторони а, рівна 0,5*sqrt(2b^2+2c^2-a^2).
*/
#include <iostream.h>
#include <math.h>

int Func (int A, int B, int C)
{
float mA, mB, mC, m2A, m2B, m2C;
{
// Пошук медіан першого трикутника
mA = 0.5 * sqrt(2*B*B + 2*C*C - A*A );
cout << "Mediana A --> " << mA << endl; 

mB = 0.5 * sqrt(2*A*A + 2*C*C - B*B );      
cout << "Mediana B --> " << mB << endl;

mC = 0.5 * sqrt(2*A*A + 2*B*B - C*C );
cout << "Mediana C --> " << mC << "\n\n" << endl;
}
{
//Пошук медіан другого трикутника
 //створеного з медіан першого
m2A = 0.5 * sqrt(2*mB*mB + 2*mC*mC - mA*mA );
cout << "Mediana(2) A --> " << m2A << endl; 

m2B = 0.5 * sqrt(2*mA*mA + 2*mC*mC - mB*mB );
cout << "Mediana(2) B --> " << m2B << endl;  

m2C = 0.5 * sqrt(2*mA*mA + 2*mB*mB - mC*mC );
cout << "Mediana(2) C --> " << m2C << endl;
return 1;
}
}

int main ()
{
 
    cout << "Vvedite storony trukutnika: " << endl;
    unsigned short int A, B, C;
    cin >> A
        >> B
        >> C;
    Func (A, B, C);
 
system ("pause");
return 1;
}
