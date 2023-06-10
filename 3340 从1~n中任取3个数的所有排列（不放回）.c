#include<stdio.h>
#include<stdlib.h>

void func1(int a[], int n, int arr[], int m);

void func2(int a[], int n, int i, int arr[], int m);

void func2(int a[], int n, int i, int arr[], int m)
{
	int j;
	int* temp = (int*)calloc(n, sizeof(int));
	for (j = 0; j < n; j++)
	{
		temp[j] = a[j];
	}
	arr[m] = temp[i];
	int k = i + 1;
	while (k < n)
	{
		temp[k - 1] = temp[k];
		k++;
	}
	func1(temp, n - 1, arr, m + 1);
}

void func1(int a[], int n, int arr[],int m)
{
	int i;
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
		func2(a, n, i, arr, m);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int i = 0;
	int* a = (int*)calloc(n, sizeof(int));
	while (i < n)
	{
		a[i] = i + 1;
		i++;
	}
	int m=0;
	int arr[3];
	func1(a, n, arr, m);
	return 0;
}