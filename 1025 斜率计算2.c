#include<stdio.h>
int get_Min(int x, int y)//���庯����ȡ�����еĽ�Сֵ
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
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);//�����ĸ�ֵ
	int up = y2 - y1;                      //��ʾ����
	int down = x2 - x1;                    //��ʾ��ĸ
	int flag = 0;                        //�����ű�Ƿ�
	if (up < 0)   //������Σ�����Ҫ��������һ���ܹؼ�
	{
		flag++;//��ʱflag������0����ʾ�ҵķ��ӱ仯��ȡ��������
		up = -up;
	}
	if (down < 0)  //������Σ���ĸҲҪ��������һ���ܹؼ�
	{
		flag--;  //��ʱflag�ع�0����ʾ���ӷ�ĸ���仯��ȡ��������
		down = -down;
	}
lable:  //"�ݹ�"��ǩ
	if (down == 1 && up != 0)   //����if else��䣬�ֱ�����������
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
		for (int i = 2; i <= get_Min(up, down); i++)  //ΪԼ��׼����������������������ȡ�÷��ӻ��߷�ĸ�Ľ�Сֵ���˷������̱Ƚ��鷳������˼·�򵥣�
		{
			if (up % i == 0 && down % i == 0 && down > 1 && up > 1)//���㹫���������ҷ��ӷ�ĸ����1�����С�ڵ���1��Ӧ����ǰ����Ϊ�����������
			{                                   //ѡ��1��Ϊ�����⡱���ٽ��ԭ������Ϊ�ҵ�i��С��2��ʼ��i=1ʱ��ѭ��
				up /= i;
				down /= i;
				goto lable;       //��ٵĵݹ�
			}
		}
		if (flag != 0)             //ǰ������������ţ�����������ǲ�����Ҫ����һ������
		{
			printf("-");
		}
		printf("%d/%d", up, down);
	}
}