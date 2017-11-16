#include <iostream>
#include <string>
using namespace std;
 
main(){   
       string st;
       int max1;
       int max2 = 0;
       int max3;
       int max4 = 0;
       cout<<"VVedit stroku: \n";
       getline(cin, st);
       for (int i = 0; i < st.length(); i++){
           max1 = 0;
           for (; st[i] == ' ';i++){
                  max1++;
                  }
           if (max1 > max2) 
           max2 = max1;
           }
       cout <<"Kolichestvo probelov idushih podryd  = "<< max2<<endl;   
         
         for (int i = 0; i < st.length(); i++){
           max3 = 0;
           for (; st[i] == 'e';i++){
                  max3++;
                  }
           if (max3 > max4) 
           max4 = max3;      
           } 
           cout<<"e = "<<max4<<endl;
           if(max4==5){
           cout<<"yes \n";}
           else
           {cout<< "no \n";}
       system("pause");
       return 0;
       }
