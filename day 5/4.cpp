#include <iostream>
using namespace std;
 
struct worker
{
    char name[16];
    int salary;
}w[6];
 
int main()
{
for(int i = 0; i<6; i++)
{
    printf("[%d]Name: ",i); cin>>w[i].name;
    w[i].salary = rand() % 10000 + 500;
}
for(int i = 0; i<6; i++)
{
    if(w[i].name[0] == 'A' || w[i].name[0] == 'C' || w[i].name[0] == 'a' || w[i].name[0] == 'c' )
        printf("%s  %d \n",w[i].name,w[i].salary);
}
 
system("pause");
return 0;
}
