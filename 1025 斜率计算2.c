#include<stdio.h>
int get_Min(int x, int y)//定义函数，取两者中的较小值
{
	if (x >= y)
	{
		return y;
	}
	else
	{
		return x;
	}
}
int main()
{
	int x1, y1, x2, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);//读入四个值
	int up = y2 - y1;                      //表示分子
	int down = x2 - x1;                    //表示分母
	int flag = 0;                        //正负号标记符
	if (up < 0)   //无论如何，分子要正数，这一步很关键
	{
		flag++;//此时flag不等于0，表示我的分子变化（取正）过了
		up = -up;
	}
	if (down < 0)  //无论如何，分母也要正数，这一步很关键
	{
		flag--;  //此时flag回归0，表示分子分母都变化（取正）过了
		down = -down;
	}
lable:  //"递归"标签
	if (down == 1 && up != 0)   //五条if else语句，分别检验特殊情况
	{
		printf("%d", up);
	}
	else if (down == 1)
	{
		printf("0");
	}
	else if (down == -1 && up != 0)
	{
		printf("%d", up * (-1));
	}
	else if (down == -1)
	{
		printf("0");
	}
	else if (down == 0)
	{
		printf("-1");
	}
	else
	{
		for (int i = 2; i <= get_Min(up, down); i++)  //为约分准备公因数，公因数最大可以取得分子或者分母的较小值，此方法过程比较麻烦（但是思路简单）
		{
			if (up % i == 0 && down % i == 0 && down > 1 && up > 1)//满足公因数，并且分子分母大于1，如果小于等于1，应该在前面作为特殊情况处理
			{                                   //选择1作为“特殊”的临界的原因，是因为我的i最小从2开始，i=1时死循环
				up /= i;
				down /= i;
				goto lable;       //虚假的递归
			}
		}
		if (flag != 0)             //前面调整过正负号，在这里检验是不是需要补上一个负号
		{
			printf("-");
		}
		printf("%d/%d", up, down);
	}
}