int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &n);
	int* p = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &p[i]);
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (p[i] == p[j])
			{
				int temp = 0;
				for (temp = j; temp < n - 1; temp++)
					p[temp] = p[temp + 1];
				j--;
				n--;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d\n", p[i]);
	return 0;
}