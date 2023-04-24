#include<stdio.h>
#include<math.h>

unsigned int Gcd(unsigned int M, unsigned int N)
{
	unsigned int Rem;
	while (N > 0)
	{
		Rem = M % N;
		M = N;
		N = Rem;
	}
	return M;
}

int main()
{
	int X1, Y1, X2, Y2;
	scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
	int ret = Gcd(abs(Y2 - Y1), abs(X2 - X1));
	float kf= (float)(Y2 - Y1) / (X2 - X1);
	int kd = (Y2 - Y1) / (X2 - X1);
	if (X1 != X2)
	{
		if (kf - kd < 0)
			printf("-%d/%d", abs(Y2 - Y1) / ret, abs(X2 - X1) / ret);
		else if (kf - kd == 0)
			printf("%d", kd);
		else
			printf("%d/%d", abs(Y2 - Y1) / ret, abs(X2 - X1) / ret);
	}
	else
		printf("-1");
	return 0;
}