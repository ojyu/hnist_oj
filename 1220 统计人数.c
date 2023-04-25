#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Stu
{
	char class[3];
	int score;
}Stu;

int cmp_by_score(const void* e1, const void* e2)
{
	return ((Stu*)e2)->score - ((Stu*)e1)->score;
}

int main()
{
	int M, K, N;
	int i = 0;
	int count = 0;
	scanf("%d%d%d", &M, &K, &N);
	Stu* p = (Stu*)calloc(M, sizeof(Stu));
	for (i = 0; i < M; i++)
		scanf("%s%d", p[i].class, &p[i].score);
	qsort(p, M, sizeof(Stu), cmp_by_score);
	for (i = 0; i < N; i++)
	{
		if (strcmp(p[i].class, "2") == 0)
			count++;
	}
	printf("%d", count);
	return 0;
}