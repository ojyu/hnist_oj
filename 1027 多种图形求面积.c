#include<stdio.h>
#define PI 3.1415926
int main()
{
	int type = 0;
	int a, b, r, s;
	scanf("%d", &type);
	switch (type)
	{
	case 1:
		scanf("%d%d", &a, &b);
		printf("%d", a * b);
		break;
	case 2:
		scanf("%d%d", &a, &b);
		printf("%d", a * b / 2);
		break;
	case 3:
		scanf("%d", &r);
		s = (int)PI * r * r;
		printf("%d", s);
		break;
	default:
		break;
	}
	return 0;
}