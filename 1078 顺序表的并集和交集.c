#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Del(int* p, int sz)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = i + 1; j < sz; j++)
		{
			if (p[i] == p[j])
			{
				int temp = p[j];
				int k = 0;
				for (k = j; k < sz - 1; k++)
					p[k] = p[k + 1];
				p[sz - 1] = temp;
				j--;
				sz--;
			}
		}
	}
	return sz;
}

void func(int* pa, int* pb, int a, int b)
{
	int i = 0;
	int j = 0;
	int* p = (int*)realloc(pa, (a + b) * sizeof(int));
	memmove(p + a, pb, sizeof(int) * b);
	int sz = Del(p, a + b);
	for (i = 0; i < sz; i++)
		printf("%d ", p[i]);
	printf("\n");
	for (i = a + b - 1; i >= sz; i--)
		printf("%d ", p[i]);
}


int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d%d", &a, &b);
	int* pa = (int*)calloc(a, sizeof(int));
	int* pb = (int*)calloc(b, sizeof(int));
	for (i = 0; i < a; i++)
		scanf("%d", &pa[i]);
	for (i = 0; i < b; i++)
		scanf("%d", &pb[i]);
	a = Del(pa, a);
	b = Del(pb, b);
	func(pa, pb, a, b);
	return 0;
}