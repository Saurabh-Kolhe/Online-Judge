#include<stdio.h>
#include<string.h>
void main()
{
	int t=1;
	scanf("%d\n",&t);
	for(int i=0; i<t; i++)
	{
		int n, d;
		scanf("%d %d", &n, &d);
		int probs[n];
		for (int l = 0; l < n; l++)
		{
			 probs[l] = 0;
		}
		for (int j = 2; j <= d; j++)
		{
			// probs[j] = 1;
			for (int k = 1; k * j <= n ; k++)
			{
				probs[j*k] = 1;
			}
		}
		int rem = 0;
		for (int l = 0; l < n; l++)
		{
			if (probs[l] == 0) 
			{
				rem++ ;
			}
		}
		printf("%d\n", rem); 
	}
}