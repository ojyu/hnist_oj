#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp_int(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}


int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	c = a + b;
	int* pa = (int*)calloc(a, 4);
	int* pb = (int*)calloc(b, 4);
	int* pc = (int*)calloc(c, 4);
	for (i = 0; i < a; i++)
	{
		scanf("%d", &pa[i]);
	}
	for (i = 0; i < b; i++)
	{
		scanf("%d", &pb[i]);
	}
	memcpy(pc, pa, sizeof(int) * a);
	memcpy(pc + a, pb, sizeof(int) * b);
	qsort(pc, c, sizeof(int), cmp_int);
	for (i = 0; i < a + b; i++)
	{
		printf("%d ", pc[i]);
	}

	return 0;
}