#include <iostream>
#include<string.h>
using namespace std;
 int main()
{
	string s,s1;
	int T;
	int j=0,k=0;
	cin >> T;
	cin >> s;
		for(int i=0;i<=s.length();i++)
		{
			if(s[i]==s[i+1])
				{
					s1[j] = s[i];
					j++;
					s1[j] = '*';
					j++;
				}
			else
				{
					s1[j] = s[i];
					j++;
				}	
		}
		s1[j]='\0';
		cout << s1 <<endl;
}