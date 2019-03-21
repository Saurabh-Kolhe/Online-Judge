#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  char s[100];

cin>>s;
int i=0;

while(s[i]!='\0')
{
  if(s[i-1]==s[i])
   {
    cout<<"*"<<s[i];
   }
else
  {
  cout<<s[i];
  }
}
return 0;
}