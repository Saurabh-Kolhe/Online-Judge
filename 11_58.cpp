#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{
char s[100];
char s1[1000];
int c=0;

cin>>s;
int l=strlen(s);
for(int j=0;j<l;j++)
{
	if(s[j]==s[j+1])
		{
			s1[c]=s[j];
			c++;
			s1[c]='*';
			c++;
	

		}	
	else
		{
		s1[c]=s[j];
		c++;


		}

}
for(int k=0;k<c;k++)
{
cout<<s1[k];

}
cout<<endl;

}

return 0;
}