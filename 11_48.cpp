#include <iostream>
#include <string.h>
using namespace std;

int main()
{
int n,k=1;
cin>>n;
char s[1000],s1[10000];
for(int i=1;i<=n;i++)
{
	
	cin>>s;
s1[0]=s[0];
	for(int j=1;j<strlen(s);j++)
	{
		if(s[j-1]==s[j])
		{
			s1[k++]='*';
			s1[k++]=s[j];
			
		}
		else
		{
			s1[k++]=s[j];
		}
	}
}
cout<<s1;
return 0;
}