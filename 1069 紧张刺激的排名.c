#include<stdio.h>
#include<stdlib.h>
typedef struct Stu
{
	unsigned long long id;
	int num;
}Stu;

void buble_sort(Stu* p, int m)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < m - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < m - 1 - i; j++)
		{
			if (p[j].num <= p[j + 1].num)
			{
				Stu temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
			return;
	}
}

void test()
{
	int m = 0;
	int i = 0;
	scanf("%d", &m);
	Stu* p = (Stu*)calloc(m, sizeof(Stu));
	for (i = 0; i < m; i++)
		scanf("%llu %d", &p[m - 1 - i].id, &p[m - 1 - i].num);
	buble_sort(p, m);
	for (i = 0; i < m; i++)
		printf("%llu %d\n", p[i].id, p[i].num);
	free(p);
	p = NULL;
}

int main()
{
	int t = 0;
	int i = 0;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		test();
	}
	return 0;
}