#include<stdio.h>
#include<math.h>
int main()
{
	int d = 300000;
	int p = 6000;
	float r = 0.01;
	float m;
	m = (log(p) - log(p - d * r)) / (1 + r);
	printf("m=%.1f\n", m);

	return 0;
}//
