#include<stdio.h>
int main()
{
	int t,n,d,i,j,cnt,count,k,x;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		count=0;
		scanf("%d%d",&n,&d);
		for(j=2;j<=d;j++)
		{
			cnt=0;
			for(k=1;k<=j;k++)
			{
				if(j%k==0)
				{
					cnt++;
				}
			}
			if(cnt==3)
				count++;
		}
		printf("%d\n",(n-count-1));
}
}
