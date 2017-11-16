#include <iostream>       
#include <string>     
#include <windows.h>
using namespace std;   


 
struct employee         
{
    string givenname;   
    string surname;     
    string address;    
};
 
employee person[30];   
 
int main()  
{
   
    SetConsoleCP(1251);       
    SetConsoleOutputCP(1251); 
 

    int qty =30;
    for (int i=0; i<qty; i++)
    {
        cout << "\nVvedite imya : ";
        getline (cin, person[i].givenname); 
                                            
 
        cin.clear();    
                        
                        
 
        cout << "Vvedite familiyu: ";
        getline (cin, person[i].surname);
        cin.clear();
 
        cout << "Vvedite adress: ";
        getline (cin, person[i].address);
        cin.clear();
    }

 
 

    cout << "Bydet vipolnen poisk sotrydnikov s familiami "
            "Kyzin, Kyravlev, Kydin, Kylkov, Kybikov" << endl;
    cout << endl;
    
    for (int i=0; i<qty; i++)
    {
      
        if (person[i].surname == "Kyzin" || person[i].surname == "Keravlev" ||
            person[i].surname == "Kydin" || person[i].surname == "Kylkov" ||
            person[i].surname == "Kybikov")
        {   
            cout << endl;
            cout << person[i].surname << "\t"
                 << person[i].address << endl;
            cout << endl;
        }
    }
    cout << endl;

 
    system("pause");  
 
    return 0;          
}
