#include<string.h>
int main()
{
	int i = 0;
	int j = 0;
	char str[256] = { 0 };
	scanf("%[^#]", str);
	int sz = strlen(str);
	for (i = sz - 1; i >= 0; i--)
	{
		if (str[i] == '(')
		{
			for (j = i + 1; j < sz; j++)
			{
				if (str[j] == ')')
				{
					str[j] = " ";
					str[i] = " ";
					break;
				}
			}
		}
	}
	if (strchr(str, '(') == NULL && strchr(str, ')') == NULL)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}