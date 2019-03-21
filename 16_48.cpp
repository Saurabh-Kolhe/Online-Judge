#include <iostream>
#include <string.h>
using namespace std;
int addvalue(int temp)
{
int digit,sum=0;
while(temp>0)
{
	digit=temp%10;
	sum=sum+digit;
	temp=temp/10;
}
return sum;
}
int  mulvalue(int temp)
{
int digit,sum=0;
while(temp>0)
{
	digit=temp%10;
	sum=sum*digit;
	temp=temp/10;
}
return sum;
}
int main()
{
int n,add,mul,temp1,temp2;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>temp2;
	temp1=temp2;
	
	
while((temp1/10)>0 && (temp2/10)>0)
{
	add=addvalue(temp1);
	mul=mulvalue(temp2);
	if((add/10)<0 && (mul/10)<0)
	{
		if(add>mul)
		{
			cout<<add;
			
		}
		else
		{
			cout<<mul;
			
		}
break;
	}
	
		if((add/10)<0 && (mul/10)>0)
		{
			cout<<add;
			break;
		}
		
			if((add/10)>0 && (mul/10)<0)
			{
				cout<<mul;
				break;
			}
			
				if((add/10)>0 && (mul/10)>0)
{
				temp1=add;
				temp2=mul;}
			
			

	}
	
}

return 0;

}