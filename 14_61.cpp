#include<iostream>
using namespace std;
int present(int arr[],int m,int y)
{
	for (int i=0;i<y;i++)
	{
		if(arr[i]==m)
		return 0;
	}
return 1;
};
int main()
{
	int n,t;
	int arr1[n];
	int arr2[n];
	cin>>arr1;
	cin>>arr2;
	int max=0;
	int i;
	int o[n];
	int y=0;
	int tr=0;
	int marks=0;
	if(tr<t)
	{
	for(i=0;i<n;i++)
	{
		max=0;
		if(present(o,i,y))
		{
			if(max<arr1[i])
			{
				max=arr[i];
			}
		}
	o[y]=i;
	y++;
	tr=tr+arr2[i];
	marks=arr1[i];
	}
	cout<<marks;
}
	
	
	