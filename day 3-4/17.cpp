
#include <iostream.h>
#include <math.h>

int main ()
{
    float formula;
//факториал 4
int n4=4;
int n4_=0;
if(n4==0)
      n4_=1;
else
   {  n4_=1;
      for(int i4=1;i4<=n4;i4++)
                    n4_*=i4;  
    }
//факториал 5
int n5=5;
int n5_=0;
if(n5==0)
      n5_=1;
else
   {  n5_=1;
      for(int i5=1;i5<=n5;i5++)
                    n5_*=i5;  
    }
//факториал 6
int n6=6;
int n6_=0;
if(n6==0)
      n6_=1;
else
   {  n6_=1;
      for(int i6=1;i6<=n6;i6++)
                    n6_*=i6;  
    }
//факториал 8
int n8=8;
int n8_=0;
if(n8==0)
      n8_=1;
else
   {  n8_=1;
      for(int i8=1;i8<=n8;i8++)
                    n8_*=i8;  
    }

formula = (2*n5_ + 3*n8_)/(n6_+n4_);
cout << formula<<endl;

system ("pause");
return 1;
}
