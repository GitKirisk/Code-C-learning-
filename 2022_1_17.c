#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d\n", &a, &b, &c);//scanf���Ի�ȡ��׼���������
	//a�����cֵ��С��abc˳�����
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;

	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d%d%d\n", a, b, c);
	return 0;
}