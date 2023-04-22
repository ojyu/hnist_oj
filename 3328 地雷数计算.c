#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	char str[5][5] = { 0 };
	int arr[5][5] = { 0 };
	int n, m;
	int i, j;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		getchar();
		for (j = 1; j <= m; j++)
		{
			scanf("%c", &str[i][j]);
			if (str[i][j] == '*')
				arr[i][j] = 1;
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (str[i][j] == '*')
				printf("*");
			else
				printf("%d", arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1]
					+ arr[i][j - 1] + arr[i][j] + arr[i][j + 1]
					+ arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1]);
		}
		printf("\n");
	}
	return 0;
}


