#include<iostream>
using namespace std;
int main ()
{
	int T,j=0,N,D,count = 0;
	cin >> T;
	int array[T-1][2];
	for(int i=0;i<T;i++)
	{
		cin >> array[i][0] >> array[i][1];
	}
	while(j<T)
	{	
		N = array[j][0];
		D = array[j][1];
		bool arr[N];
		for(int i=2;i<=D;i++)
		{
			int x=i;
			while(x<=N)
			{
				arr[x] = true;
				x=x+i;
			}
		}
		for(int i=0;arr[i]!='\0';i++)
		{
			if(!arr[i])
				count++;
		}
		cout << count;		

	}
}