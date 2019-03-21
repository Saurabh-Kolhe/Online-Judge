#include<stdio.h>
#include<string.h>
void main()
{
	int T=1;
	scanf("%d", &T);
	for(int i = 0; i<T; i++)
	{
		int Days, AmtIce;
		scanf("%d %d",&Days, &AmtIce);
		int MaxIce[Days];
		for (int j=0; j<Days; j++)
		{
			scanf("%d", &MaxIce[j]);
		}
		// scanf("%d", &MaxIce[Days-1]);
		int TotalEat = MaxIce[0];
		for (int k=1; k<Days; k++)
		{
			TotalEat += MaxIce[k];
			if (MaxIce[k]==MaxIce[k-1])
			{
				// TotalEat = MaxIce[k]-1;
				TotalEat -= 1;
			}
		}
		printf("%d",TotalEat);
	}
}