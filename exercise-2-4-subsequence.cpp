#include <stdio.h>
#include <math.h>
int main()
{
	int n,m;
	double sum=0;
	int count = 1;
	while(scanf("%d%d", &n, &m)==2 && !(n==0 && m==0))
	{
		sum = 0;
		for(int i=n;i<=m;i++)
		{
			sum += 1.0 / pow(i,2);
		}
		printf("Case %d: %.5f\n", count, sum);
		count++;
	}
	return 0;
}