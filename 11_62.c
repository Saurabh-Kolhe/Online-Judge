#include<stdio.h>
#include<string.h>
void main()
{
	int t=1;
	scanf("%d\n",&t);
	for(int i=0; i<t; i++)
	{
		char stringa[101];
		scanf("%s",&stringa[0]);
		int n = strlen(stringa);
		char output[1000];
		int outindex = 0;
		for (int q=0; q<n-1; q++)
		{
			char c =stringa[q];
			output[outindex] = c;
			outindex++;
			char cnext = stringa[q+1];	
			if (c==cnext)
			{
				output[outindex] = '*';
				outindex++;
			}
		}
		output[outindex] = stringa[n-1];
		output[outindex+1] = '\0';
		printf("%s\n", output);
	}
}