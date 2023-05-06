#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch = 0;
	scanf("%c", &ch);
	int ret = tolower(ch);
	printf("%c %d", ret, ret - 96);
	return 0;
}