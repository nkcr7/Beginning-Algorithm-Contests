#include <stdio.h>

int main()
{
	int b,c;
	
	for (int a=123;a<330;a++)
	{
		int tmp[9];
		for(int i=0;i<10;i++)
			{tmp[i]=100;}
		b = 2 * a;
		c = 3 * a;
	
		if(tmp[a%10]==100)
			{tmp[a%10]= a % 10;}
		else
			{continue;}
		if(tmp[(a / 10) %10]==100)
			{tmp[(a / 10) %10]= (a / 10) %10;}
		else
			{continue;}
		if(tmp[(a / 100) %10]==100)
			{tmp[(a / 100) %10]= (a / 100) %10;}
		else
			{continue;}

		if(tmp[b%10]==100)
			{tmp[b%10]= b % 10;}
		else
			{continue;}
		if(tmp[(b / 10) %10]==100)
			{tmp[(b / 10) %10]= (b / 10) %10;}
		else
			{continue;}
		if(tmp[(b / 100) %10]==100)
			{tmp[(b / 100) %10]= (b / 100) %10;}
		else
			{continue;}

		if(tmp[c%10]==100)
			{tmp[c%10]= c % 10;}
		else
			{continue;}
		if(tmp[(c / 10) %10]==100)
			{tmp[(c / 10) %10]= (c / 10) %10;}
		else
			{continue;}
		if(tmp[(c / 100) %10]==100)
			{tmp[(c / 100) %10]= (c / 100) %10;}
		else
			{continue;}
		printf("%d %d %d\n",a,b,c );
	}
	return 0;
}