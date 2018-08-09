# include <stdio.h>

int main()
{
	int a,b,c;
	float m;
	scanf("%d %d %d", &a, &b, &c);
	m = (a + b + c) / 3.0;
	printf("%.2f\n", m);
	return 0;
}