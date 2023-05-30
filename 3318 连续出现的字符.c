#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int k = 0;
	int i = 0;
	char ch = 0;
	int count = 1;
	char p[100] = { 0 };
	scanf("%d", &k);
	scanf("%s", p);
	for (i = 0; i < strlen(p) - 1; i++)
	{
		if (p[i] == p[i + 1])
			count++;
		else
			count = 1;
		if (count >= k)
		{
			printf("%c\n", p[i + 1]);
			break;
		}
	}
	if (count < k)
		printf("No\n");
	return 0;
}