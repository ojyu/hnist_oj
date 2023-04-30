#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp_by_char(const void* e1, const void* e2)
{
	return *((char*)e1) - *((char*)e2);
}


void test(char* str)
{
	int i = 0;
	int j = 0;
	int sz = strlen(str);
	int max = 0;
	int maxc = 0;
	for (i = 0; i < sz; i++)
	{
		if (str[i] == ' ' || str[i] == '.')
		{
			for (j = i; j < sz - 1; j++)
				str[j] = str[j + 1];
			i--;
			sz--;
		}
	}
	qsort(str, sz, sizeof(char), cmp_by_char);
	for (i = 0; i < sz-1; i++)
	{
		int count = 1;
		for (j = i+1; j < sz; j++)
		{
			if (str[i] == str[j])
				count++;
		}
		if (count > max)
		{
			max = count;
			maxc = str[i];
		}
	}
	printf("%c %d\n", maxc, max);
}


int main()
{
	
	while (1)
	{
		char* str = (char*)calloc(1000, sizeof(char));
		if (fgets(str,1000,stdin) == NULL)
			break;
		test(str);
		free(str);
		str = NULL;
	}
	return 0;
}