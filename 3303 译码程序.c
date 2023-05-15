#include<stdio.h>
#include<string.h>
int main()
{
	char arr[256] = { 0 };
	scanf("%[^.]", arr);
	int sz = strlen(arr);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == ' ')
			printf("%c", '#');
		else
			printf("%d", arr[i] - 96);
	}
	return 0;
}