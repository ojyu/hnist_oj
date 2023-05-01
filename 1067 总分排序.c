#include<stdio.h>
#include<stdlib.h>

typedef struct Stu
{
	char name[5];
	char id[20];
	int score[5];
	int total;
}Stu;

int cmp_by_total(const void* e1, const void* e2)
{
	return ((Stu*)e2)->total - ((Stu*)e1)->total;
}

int main()
{
	int n;
	int i = 0;
	scanf("%d", &n);
	Stu* p = calloc(n, sizeof(Stu));
	for (i = 0; i < n; i++)
	{
		scanf("%s%s", p[i].name, p[i].id);
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &p[i].score[j]);
			p[i].total += p[i].score[j];
		}
	}
	qsort(p, n, sizeof(Stu), cmp_by_total);
	for (i = 0; i < n; i++)
	{
		printf("%s %s total=%d\n", p[i].name, p[i].id, p[i].total);
	}

	return 0;
}