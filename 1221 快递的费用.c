#include<stdio.h>
#include<math.h>

int main()
{
	int w,no;
	int arr[6] = { 0,4,6,9,10,17 };
	scanf("%d%d", &w, &no);
	if (w <= 500)
		printf("20\n");
	else
		printf("%d", 20 + arr[no] * (int)(ceil((w - 500.0) / 500)));
	return 0;
}