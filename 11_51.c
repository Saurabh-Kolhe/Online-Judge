#include<iostream>
using namespace std;
int main()
{
char a[10], temp=*;
cout<<"Enter the word"<<endl;
cin>>a;
i=0;
while(a[i]!='/0')
{
if(a[i]==a[i+1])
{
i++;
while(a[i]!='/0)
{
a[i+1]=a[i];
}
}
a[i]=temp;
i++;
}
return 0;
}




