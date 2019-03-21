#include<iostream>
using namespace std;

int main()
{
	int k;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		char ch[1000];
		cin>>ch;
		char arr[5000];
		int p=0;
		int j=0;
		for(j=0;ch[j]!='\0';j++)
		{
			if(ch[j]==ch[j+1])
			{
				arr[p]=ch[j];
				p++;
				arr[p]='*';
			}
			else
			{
				arr[p]=ch[j];
			}
		p++;
		}
	for(int y=0;arr[y]!='\0';y++)
	{
		cout<<arr[y];
	}
}
}