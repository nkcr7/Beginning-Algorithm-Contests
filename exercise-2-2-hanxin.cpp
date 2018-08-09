#include <stdio.h>

int main()
{
	int a,b,c;
	int count = 1;
	int flag = 0;
	while(scanf("%d%d%d", &a, &b, &c)==3)
	{
		for(int i=10;i<=100;i++)
		{
			if(i%3==a && i%5==b && i%7==c)
			{
				flag = 1;
				printf("Case %d: %d\n", count, i);
				break;
			}
		}
		if(flag == 0)
		{printf("Case %d: No answer\n", count);}
		count++;
		flag = 0;
	}
	return 0;
}