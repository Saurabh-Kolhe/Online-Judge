#include<stdio.h>
#include<string.h>

void main()
{
	int t = 1;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		// char ns[6];
		int n;
		scanf("%d", &n);
		// int n = strlen(ns);
		int a = 1;
		int b = 0;
		int n1 = n;
		int n2 = n;
		while (n1 >= 10)
		{
			// ds = 0;
			int c = n1;
			while (c >= 10)
			{
				int dec = c/10;
				int dig = c - (10*dec);
				a *= dig;
				c = c/10;
			}
			n1 = a;
		}
		while (n2 >= 10)
		{
			int c = n2;
			while(c >= 10)
			{
				int dec = c/10;
				int dig = c - 10*dec;
				b += dig;
				c =c/10;
			}
			n2 = b;
		}
		if (n1 > n2)
		printf("%d\n", n1);
		else printf("%d\n", n2); 
	}
}