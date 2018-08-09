#include <iostream>
#include <string>

int main()
{
	int a;
	std::string s;
	std::cin>>a;
	int sum=0;
	int sum_s=0;
	for (int i=0; i<a; i++)
	{
		std::cin>>s;
		sum_s = 0;
		sum = 0;
		for(int j=0; j < s.size(); j++)
		{
			if (s[j] == 'O')
			{	
				sum_s +=1;
			
				sum += sum_s;
			}
					
			
			else
			{
				sum_s = 0;
			}
		}
		std::cout<<sum<<"\n";
	}

	return 0;
}