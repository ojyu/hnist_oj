#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[256];
	scanf("%[^.]", str);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
			printf("#");
		else
			printf("%d", str[i] - 96);
	}
	return 0;
}