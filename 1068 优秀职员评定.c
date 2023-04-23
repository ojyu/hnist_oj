#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int t;
	while (scanf("%d", &t)!=EOF)
	{
		int i, j;
		int max = 0;
		int count = 0;
		int* p = calloc(t, sizeof(int));
		memset(p, 0, sizeof(int));
		for (i = 0; i < t; i++)
		{
			int score = 0;
			for (j = 0; j < 5; j++)
			{
				scanf("%d", &score);
				*(p + i) += score;
			}
			if (*(p + i) < 85)
				count++;
			else
				max = (*(p + i)) > max ? (*(p + i)) : max;
		}
		if (count == t)
			printf("%d %s\n", count, "No");
		else
			printf("%d %d\n", count, max);
		free(p);
		p = NULL;
	}
	return 0;
}