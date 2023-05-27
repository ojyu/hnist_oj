#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func(char* str)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	int sz = strlen(str);
	for (i = 0; i < sz; i++)
	{
		int count = 1;
		for (j = i + 1; j < sz; j++)
		{
			if (str[i] == str[j])
			{
				for (temp = j; temp < sz - 1; temp++)
					str[temp] = str[temp + 1];
				count++;
				j--;
				sz--;
			}
		}
		printf("%d%c", count, str[i]);
	}
}

int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int t = 0;
		scanf("%d", &t);
		char* str = (char*)calloc(t, sizeof(char));
		scanf("%s", str);
		func(str);
		printf("\n");
	}

	return 0;
}