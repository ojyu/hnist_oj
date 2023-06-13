#include<stdio.h>

void func(int n, int m, int arr[], int prev)
{
	if (m == 3)
	{
		printf("%d%d%d\n", arr[0], arr[1], arr[2]);
		return;
	}
	int i;
	for (i = prev + 1; i <= n; i++)
	{
		arr[m] = i;
		func(n, m + 1, arr, i);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[3];
	func(n, 0, arr, 0);
}

