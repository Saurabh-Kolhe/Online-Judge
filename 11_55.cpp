#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
char str[1000], str1[2000];
cin>>str;
int len=strlen(str);
str1[0]=str[0];
int i=1,j=1;
for(i=1;i<len;i++)
{
if(str[i]==str[i-1])
{
str1[j]='*';
j++;
}
str1[j++]=str[i];
}
str1[j]='\0';
cout<<str1<<endl;
}}