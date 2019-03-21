#include<stdio.h>
int main()
{
	int test,x[100],y[100],i,j;
	int arr[100][100];
	scanf("%d",&test);
	for(j=0;j<test;j++)
	{
		scanf("%d%d",&x[j],&y[j]);
		for(i=0;i<x[j];i++)
			scanf("%d",&arr[x[j]][i]);	
	}
	
	//process
	int k=0,sum[100]={0},prev,temp;
	for(i=0;i<test;i++)
	{
		//k=0;
		prev=0;
		temp=x[i];
		for(j=0;j<temp;j++)
		{
			if(arr[temp][j] < y[i] && prev != arr[temp][j])
			{
				sum[i] += arr[temp][j];
				prev=arr[temp][j];
			}
			else if( prev == arr[temp][j] && prev != 0)
			{
				 sum[i] += arr[temp][j] -1;
				prev = arr[temp][j] - 1;
 			}
		}
	}

	for(i=0;i<test;i++)
		printf("%d\n",sum[i]);
	return 0;
}