#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum=0;
	int product;
	for (int i=1; i<=n;i++)
	{
		product = 1;
		for (int j=1;j<=i;j++)
		{
			product = product * j;
		}
		sum = sum + product;
	}
	printf("%d\n", sum % 1000000);
}