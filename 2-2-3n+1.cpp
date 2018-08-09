#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int count = 0;
	while(n > 1)
	{
		if(n % 2 == 1)
			n = 3 * n + 1;
		else
			n = n / 2;
		count++;
	}
	printf("%d\n", count);
	return 0;
}