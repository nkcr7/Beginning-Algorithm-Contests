#include <iostream>
#include <vector>


int main()
{
	int a;
	std::cin>>a;
	int n;
	int t;

	std::vector<int> tmp;
	std::vector<int> ans;



	for (int i = 0; i < a; i++)
	{
		std::cin>>n;
		ans.clear();
		ans.assign(10,0); // store 0~9 counts
		tmp.clear();
		// push digit sequence into tmp
		for (int l = 1; l <= n; l++)
		{
			t = l;
			while (t >= 1)
			{
			    int digit = t % 10;
			    t /= 10;
			    tmp.push_back(digit); // inverse order does not matter
			}
		}


		// digit counting
		for (int j = 0; j < tmp.size(); j++)
		{	
			ans[tmp[j]] += 1;
		}

		for (int k = 0; k < ans.size(); k++)
		{
			if (k == 0) std::cout<<ans[k];
			else std::cout<<" "<<ans[k];
		}
		std::cout<<"\n";

	}
	return 0;
}