/* Print the words that occur in each of the two
given examples. */
#include <iostream>
#include <conio.h>
#include <locale>
using namespace std;
int main()
{   
    char *tempSlova1 = new char[20];
    char *tempSlova2 = new char[20]; 
    char *myString1 = new char[100];
    char *myString2 = new char[100]; 
    cout << "1 stroka: "; 
    fflush(stdin);
    gets(myString1);
    cout << "2 stroka: ";
    gets(myString2);
    cout << "slova 1stroki:" << endl;
    for(int i = 0, k =0 ; i <= strlen(myString1); i++, k ++)
    {   
        if(myString1[i] == ' '|| myString1[i] == '\0')
        {   
            tempSlova1[k] = '\0';
               
            k = -1;   
        }
        else
            tempSlova1[k] = myString1[i];  
    }
    cout << "2stroki:" << endl; 
    for(int i = 0, k =0 ; i <= strlen(myString2); i++, k ++)
    {   
        if(myString2[i] == ' '|| myString2[i] == '\0')
        {   
            tempSlova2[k] = '\0';
            puts(tempSlova2);
            k = -1;  
        }
        else
            tempSlova2[k] = myString2[i];
    }

   getch();
    return 0;
}
