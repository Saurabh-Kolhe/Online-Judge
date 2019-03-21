#include<iostream>
using namespace std;

int main()
{
  int n,rem,rem2,a=0,b=1;

int num=n;
while(n>0)
{
   rem=n%10;
   a=a+rem;
    n=n/10;
if(a>9)
   n=a;

   rem2=num%10;
   b=b*rem2;
   num=num/10; 

if(b>9)
   num=b;
}

if(a>b)
  cout<<a;
   else  
  cout<<b;
return 0;
}