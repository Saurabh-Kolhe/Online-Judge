#include<iostream>

using namespace std;
int main()
{
int T;
cout<<"Enter testcase:";
cin>>T;
String s;
String s1;
char c;
int i=0;
while(T>0)
{
cout<<"Enter a word:";
cin>>s;
for(i=0;i<strlen(s)-1;i++)
{
if(s[i]==s[i+1])
{
s1=s[i]+'*';
}
}
cout<<s1;
}
}
