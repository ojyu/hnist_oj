#include<stdio.h>
#include<math.h>

int Gcd(int M, int N)
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
	int num = Gcd(abs(Y2 - Y1), abs(X2 - X1));
	float kf= (float)(Y2 - Y1) / (X2 - X1);
	int kd = (Y2 - Y1) / (X2 - X1);
	if (X1 != X2)
	{
		if (kf - kd < 0)
			printf("-%d/%d", abs(Y2 - Y1) / num, abs(X2 - X1) / num);
		else if (kf - kd == 0)
			printf("%d", kd);
		else
			printf("%d/%d", abs(Y2 - Y1) / num, abs(X2 - X1) / num);
	}
	else
		printf("-1");
	return 0;
}