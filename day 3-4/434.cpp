/*ƒаны действительные числа а1,Е,an, b1,Е,bm.
¬ последовательности а1, ..., an и в последовательности 
b1,Е,bm все члены, следующие за членом с наибольшим 
значением (за первым по пор€дку, если их несколько), 
заменить на 0.5.
*/
#include <iostream>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
class RealRand {
    double top;
public:
    RealRand(double t) : top(t) {}
    double operator () () { return top * fabs(sin(rand())); }
};
 
int main(){
    const double TOP_VALUE(10.0);
    const double DEF_VALUE(0.5);
    
    srand(time(0));
    
    const size_t N(10);
    double a[N];
    std::generate_n(a, N, RealRand(TOP_VALUE));
    std::copy(a, a + N, std::ostream_iterator<double>(std::cout, " "));
    std::cout << std::endl;
    double * pMaxA = (double*)std::max_element(a, a + N);
    std::fill_n(pMaxA + 1, N - (pMaxA - a + 1), DEF_VALUE);
    std::copy(a, a + N, std::ostream_iterator<double>(std::cout, " "));
    std::cout << std::endl;
    
    std::cout << std::endl;
    
    const size_t M(8);
    double b[M];
    std::generate_n(b, M, RealRand(TOP_VALUE));
    std::copy(b, b + M, std::ostream_iterator<double>(std::cout, " "));
    std::cout << std::endl;
    double * pMaxB = (double*)std::max_element(b, b + M);
    std::fill_n(pMaxB + 1, M - (pMaxB - b + 1), DEF_VALUE);
    std::copy(b, b + M, std::ostream_iterator<double>(std::cout, " "));
    std::cout << std::endl;
    system("pause");
    
    return 0;
}
