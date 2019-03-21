#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k=0,l=0,test;
	char prev,present,next;
	char string[100][100];
	char buffer[100][100];
	
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%s",string[i]);
	}

	//process
	for(i=0;i<test;i++)
	{
		prev=string[i][0];
		buffer[k][l++]=prev;
		for(j=1;j<strlen(string[i]);j++)
		{			
			present=string[i][j];
			if(prev==present)
				{
					buffer[k][l++]='*';
					buffer[k][l++]=present;
					prev=present;
				}
			else
			{
				buffer[k][l++]=present;
				prev=present;
			}
			
		}
		buffer[k++][l]='\0';
	}
	for(i=0;i<test;i++)
	printf("%s",buffer[i]);
	return 0;
}