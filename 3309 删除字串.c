#include<stdio.h>
#include<string.h>

int main()
{
	char str1[1000] = { 0 };
	char str2[1000] = { 0 };
	scanf("%s", str1);
	scanf("%s", str2);
	while (1)
	{
		if (strcmp(str1, str2) == 0)
		{
			printf("NULL");
			break;
		}
		char* ch = strstr(str1, str2);
		if (ch == NULL)
		{
			printf(str1);
			break;
		}
		int sz1 = strlen(str1);
		int sz2 = strlen(str2);
		memmove(ch, ch + sz2, sz1 - sz2 - (ch - str1) + 1);
	}
	return 0;
}