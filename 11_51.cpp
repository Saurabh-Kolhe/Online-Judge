#include<iostream>
using namespace std;
int main()
{
char a[10], b[10],temp='*';
int size,ncase;
cout<<"Enter the number of cases"<<endl;
cin>>ncase;
for(int z=1;z<=ncase;z++)
{
cout<<"Enter the size of word"<<endl;
cin>>size;
cout<<"Enter the word"<<endl;
cin>>a;
int i=0,j=0;
while(i!=size  && j!=size)
{
if(a[i]==a[i+1])
{
b[j]=a[i];
b[j+1]=temp;
j=j+2;
b[j]=a[i+1];
j++;
i=i+2;
}
else
{
b[j]=a[i];
i++;
j++;
}
}
cout<<b;
}
return 0;
}




