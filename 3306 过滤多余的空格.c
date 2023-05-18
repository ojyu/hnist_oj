#include<stdio.h>
#include<string.h>
int main()
{
	char str[200] = { 0 };
	scanf("%[^\n]", str);
	char* p = strtok(str, " ");
	while (1)
	{
		printf("%s", p);
		p = strtok(NULL, " ");
		if (p != NULL)
			printf(" ");
		else
			return 0;
	}
}