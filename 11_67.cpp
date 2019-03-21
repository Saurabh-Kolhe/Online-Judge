#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,s1,f;
		cin>>s;
		s1=s;f=s[0];
		for(int i=1;i<s1.size();i++)
		{	
			if(s1[i]==s1[i-1])
			{	f+="*";
				f+=s1[i];}
			else f+=s1[i];
		}
		cout<<f<<"\n";
	}		
	return 0;
}
