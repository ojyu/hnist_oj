#include<stdio.h>

int main()
{
	char str1[100];
	char str2[100];
	scanf("%s%s", str1, str2);
	int s1 = 0;
	int p = 0;
	while (str1[p] != '\0')
	{
		int s2 = 0;
		while (str1[s1] != '\0' && str1[s1] == str2[s2])
		{
			s1++;
			s2++;
		}
		if (str2[s2] == '\0')
		{
			printf("%d", p+1);
			break;
		}
		else
		{
			s1 = ++p;
		}
	}

	return 0;
}