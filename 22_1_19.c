#include<stdio.h>
#include<math.h>
int main()
{
	printf("100���ڵ������У�\n");
	int dividend, divisor;
	for (dividend = 2; dividend <= 100; dividend++)
	{
		for (divisor = 2; divisor <= 100; divisor++)
		{
			if (dividend % divisor == 0)
				break;
		}
		if (divisor >= dividend)
     		printf("%d ", dividend);
	}
	return 0;
}
//��100���ڵ�����