#include<iostream>
using namespace std;

int main()
{
int T,X,K;
int arr[100];

cin>>T;

for(int m = 0; m<T; m++)
{

	cin>>X;
	cin>>K;

	for(int n = 0; n<X; n++)
		cin>>arr[n];

	int i = 0;
	int j=1;
	
	while(j<X)
	{
		if(arr[i] != arr[j])
		{
			i++;
			j++;
		}
		else
		{
			arr[j] = arr[j] - 1;
			i++;
			j++;
		}

	}

int sum = 0;
int p;
for(p = 0 ; p<X; p++)
{
	if(sum+arr[p] >= K)
		break;
	else
	{
		sum = sum +  arr[p];
	}
}
if(p==X)
	cout<<sum<<endl;	
else
	cout<<K<<endl;

	

}

}