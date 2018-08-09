#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	for(int n=100;n<=999;n++)
	{
		c = n % 10;
		b = int(n/10) % 10;
		a = int(n/100) % 10;
		if (n == pow(a,3) + pow(b,3) + pow(c,3))
		{
			printf("%d\n", n);
		}
	}
	return 0;
}