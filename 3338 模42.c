#include<stdio.h>

int main()
{
	int arr[10];
	int sz = 10;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = i + 1; j < sz; j++)
		{
			if (arr[j]==arr[i])
			{
				int k = 0;
				for (k = j+1 ; k < sz; k++)
				{
					arr[k-1] = arr[k];
				}
				j--;
				sz--;
			}
		}
	}
	printf("%d", sz);
	return 0;
}