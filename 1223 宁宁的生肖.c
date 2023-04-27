#include<stdio.h>
int main()
{
	char* str[12] = { "Monkey","Rootes","Dog","Pig","Rat","Ox","Tiger","Rabbit","Dragon","Snake","Horse","Ram" };
	int y = 0;
	scanf("%d", &y);	
	printf(str[y % 12]);
	return 0;
}