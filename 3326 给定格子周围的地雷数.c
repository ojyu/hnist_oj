#include<stdio.h>
int main()
{
	int n, m;
	int i, j;
	int arr[100][100] = { 0 };
	int h, l;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			scanf("%d", &arr[i][j]);
	}
	scanf("%d%d", &h, &l);
	if (arr[h][l] == 1)
		printf("%d", -1);
	else
		printf("%d", arr[h - 1][l - 1] + arr[h - 1][l] + arr[h - 1][l + 1]
			+ arr[h][l - 1] + arr[h][l] + arr[h][l + 1]
			+ arr[h + 1][l - 1] + arr[h + 1][l] + arr[h + 1][l + 1]);
	return 0;
}
