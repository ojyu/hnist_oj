#include<stdio.h>
#include<stdlib.h>

typedef struct CarInfo
{
	char str[6];
}CarInfo;

typedef struct Manage
{
	int count;
	CarInfo data[];
}Manage;

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	Manage* pc = (Manage*)calloc(1, sizeof(int) + n * sizeof(CarInfo));
	pc->count = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%s", pc->data[i].str);
		if ((pc->data[i].str[0] >= 65 && pc->data[i].str[0] <= 71) || (pc->data[i].str[0] >= 52 && pc->data[i].str[0] <= 54))
			pc->count++;
	}
	printf("%d", n - (pc->count));
	return 0;
}