#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

int main()
{
	const float C_m = 12.01;
	const float H_m = 1.008;
	const float O_m = 16.00;
	const float N_m = 14.01;

	int a;
	std::cin>>a;

	std::string s;
	std::vector<float> tmp;

	float sum=0;

	for (int i = 0; i < a; i++)
	{
		std::cin>>s;
		sum = 0;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == 'C' || s[j] == 'H' || s[j] == 'O' || s[j] == 'N') // if C,H,O,N
			{
				if (tmp.size() != 0)
				{
					// calculate previous sum
					if (tmp.size() == 1) // omit 1
					{
						sum += tmp[0];
					}
					else if (tmp.size() == 2) // 2~9
					{
						sum += tmp[0] * tmp[1];
					}
					else if (tmp.size() == 3) // 10~99
					{
						sum += tmp[0] * (tmp[1] * 10.0 + tmp[2]);
					}
					// clear tmp
					tmp.clear();
				}
				// push to tmp
				if (s[j] == 'C') tmp.push_back(C_m);
				if (s[j] == 'H') tmp.push_back(H_m);
				if (s[j] == 'O') tmp.push_back(O_m);
				if (s[j] == 'N') tmp.push_back(N_m);
				 
			}
			else
			{
				// push to tmp
				tmp.push_back(float(s[j] - '0'));
			}
			

		}
		// last group
		if (tmp.size() != 0)
				{
					// calculate previous sum
					if (tmp.size() == 1) // omit 1
					{
						sum += tmp[0];
					}
					else if (tmp.size() == 2) // 2~9
					{
						sum += tmp[0] * tmp[1];
					}
					else if (tmp.size() == 3) // 10~99
					{
						sum += tmp[0] * (tmp[1] * 10.0 + tmp[2]);
					}
					// clear tmp
					tmp.clear();
				}
		printf("%.3f\n", sum);

	}


	return 0;
}