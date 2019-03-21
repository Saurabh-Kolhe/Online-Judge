#include<stdio.h>

int main()
{
	int test,n[10],d[10],i,j,count[10]={0};
	int l;
	int arr[10]={0};
	scanf("%d\n",&test);
	for(i=0;i<test;i++)
	{
		scanf("%d%d\n",&n[i],&d[i]);
	}
	
	for(l=0;l<test;l++)
	{
		for(i=2;i<=d[l];i++)
		{
			for(j=1;j<=n[l];j++)
			{
				if(j%i == 0 && arr[j] != 1)
					arr[j]=1;
			}
		}
		for(j=1;j<=n[l];j++)
		{
			if(arr[j] == 0 )
				count[l]++;
		}

	}
	
	for(i=0;i<test;i++)
		printf("%d",count[i]);
	return 0;
}