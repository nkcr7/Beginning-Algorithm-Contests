#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
int main()
{
	int T;
	int m;
	int n;
	std::vector<std::string> s;
	std::vector<int> tmp;
	std::vector<int>::iterator it;
	int hamming = 0;

	std::cin>>T;

	for (int i = 0; i < T; i++)
	{
		std::cin>>m;
		std::cin>>n;
		s.clear();
		s.resize(m);
		hamming = 0;

		for (int j = 0; j < m; j++)
		{
			std::cin>>s[j];
		}

		for (int column = 0; column < n; column++)
		{
			tmp.clear();
			tmp.resize(4);
			for (int row = 0; row < m; row++)
			{
				// calculate tmp
				switch (s[row][column])
				{
					case 'A':
					{
						tmp[0]++;
						break;
					}
					case 'C':
					{
						tmp[1]++;
						break;
					}
					case 'G':
					{
						tmp[2]++;
						break;
					}
					case 'T':
					{
						tmp[3]++;
						break;
					}
					default:
					break;
				}

			}

			// find max tmp
			it = std::max_element(tmp.begin(), tmp.end());
			// sum up hamming
			hamming = hamming + (m - *it);
			// output ACGT sequence
			switch (std::distance(tmp.begin(), it))
			{
				case 0:
				{
					std::cout<<'A';
					break;
				}
				case 1:
				{
					std::cout<<'C';
					break;
				}
				case 2:
				{
					std::cout<<'G';
					break;
				}
				case 3:
				{
					std::cout<<'T';
					break;
				}
				default:
				{
					break;
				}
			}
		}
		// output hamming
		std::cout<<"\n";
		std::cout<<hamming<<"\n";
	}


	return 0;
}