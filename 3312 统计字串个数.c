#include<stdio.h>
#include<string.h>
int main()
{
	int count = 0;
	char str1[1000] = { 0 };
	char str2[6] = { 0 };
	scanf("%s", str1);
	scanf("%s", str2);
	int sz = strlen(str2);
	char* p = str1;
	while (1)
	{
		p = strstr(p, str2);
		if (p == NULL)
			break;
		else
		{
			p += sz;
			count++;
		}

	}
	printf("%d", count);
	return 0;
}