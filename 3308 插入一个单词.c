#include<stdio.h>

#include<string.h>

int main()
{
	char str[100] = { 0 };
	scanf("%[^\n]", str);
	int sz1 = strlen(str);
	char word[20] = { 0 };
	scanf("%s", word);
	int sz2 = strlen(word);
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
		printf("%c", str[i]);
	printf(word);
	for (i = n; i < sz1; i++)
		printf("%c", str[i]);
	return 0;
}