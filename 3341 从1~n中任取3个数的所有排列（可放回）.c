#include<stdio.h>
#include<stdlib.h>

void func(int a[], int n, int arr[], int m)
{
	int i = 0;
	if (m == 3)
	{
		for (i = 0; i < m; i++)
		{
			printf("%d", arr[i]);
		}
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		arr[m] = a[i];
		func(a, n, arr, m + 1);
	}
}

int main()
{
	int n;
	int i = 0;
	scanf("%d", &n);
	int* a = (int*)calloc(n, sizeof(int));
	while (i < n)
	{
		a[i] = i + 1;
		i++;
	}
	int m = 0;
	int arr[3];
	func(a, n, arr, m);
	return 0;
}