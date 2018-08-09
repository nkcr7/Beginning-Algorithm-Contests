# include <stdio.h>

int main()
{
	int n,m;
	int x, y;
	scanf("%d %d", &n, &m);
	x = 2 * n - m / 2;
	y = (m - 2 * n) / 2;
	if (x<0 || y<0 || m%2 == 1)
		printf("no answer\n");
	else
		printf("%d %d\n", x, y);
	return 0;

}