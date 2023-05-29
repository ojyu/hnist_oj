#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct Info
{
	char name[50];
	char password[50];
	char email[50];
}Info;


int main()
{
	char str[50];
	int i = 0;
	int n = 0;
	int count = 0;
	scanf("%s", str);
	scanf("%d", &n);
	Info* p = (Info*)calloc(n, sizeof(Info));
	for (i = 0; i < n; i++)
	{
		scanf("%s %s %s", p[i].name, p[i].password, p[i].email);
		if (strcmp(str, p[i].email) == 0)
		{
			int j = 0;
			while (p[i].password[j])
			{
				if (islower(p[i].password[j]) == 0)
					p[i].password[j] = tolower(p[i].password[j]);
				else
					p[i].password[j] = toupper(p[i].password[j]);
				j++;
				count++;
			}
			printf("%s %s\n", p[i].name, p[i].password);
		}
	}
	if (count == 0)
		printf("empty\n");

	return 0;
}