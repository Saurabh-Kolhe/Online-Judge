#include<stdio.h>
int main()
{
	int test,n[10],i,sid,aka,max,y;
	
	scanf("%d",&test);
	for(i=0;i<test;i++)
		scanf("%d",&n[i]);
	int s,x,mul;
	for(i=0;i<test;i++)
	{
		 s=0;
		 x=n[i];
		yo : while( x > 0)
		{      
			y=x;
			 x= x%10;
			s += x;
			//mul *= x;
			x = y/10; 
		}
		if (s > 9)
		{
			x=s;
			s=0;
			goto yo;
		}
		x=n[i];
		mul=1;
		mo : while( x > 0)
		{      
			y=x;
			 x= x%10;
			mul *= x;
			x = y/10; 
		}
		if (mul > 9)
		{
			x=mul;
			mul=1;
			goto mo;
		}
		max = s > mul ? s : mul;
		printf("%d",max);
	}
	return 0;
}
