#include <iostream>
#include <string>


int main()
{
	int a;
	std::cin>>a;

	std::string s;
	int pointer;
	int period;
	int flag;

	for (int i = 0; i < a; i++)
	{
		std::cin>>s;
		period = 0;
		pointer = 0;
		for (period = 1; period < s.size()+1; period++)
		{
			flag = 1;
			for (pointer = 0; pointer < s.size(); pointer++)
			{
				if (s[pointer] != s[(pointer+period)%s.size()])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				if (i < a - 1)
				{
					std::cout<<period<<"\n\n";
					break;
				}
				else
				{
					std::cout<<period<<"\n";
					break;
				}
			}
		}	
	}

	return 0;
}	