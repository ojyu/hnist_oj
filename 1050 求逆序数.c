#include<stdio.h>
int main()
{
	int n, i, j;
	int arr[100] = { 0 };
	int count = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
				count++;
		}
	}
	printf("%d", count);
	return 0;
}