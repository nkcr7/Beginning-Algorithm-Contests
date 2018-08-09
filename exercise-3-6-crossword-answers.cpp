#include <iostream>
#include <string>
#include <vector>


int main()
{
	std::vector<std::string> map_across;
	std::vector<std::string> map_down;
	std::vector< std::vector<int> > position;
	std::vector<int> tmp;
	int r, c;

	for (int count = 1; ; count++)
	{
		std::cin>>r;
		if (r == 0) break;
		if (count != 1)
			std::cout<<"\n";

		map_across.clear();
		map_across.resize(r);
		map_down.clear();
		map_down.resize(r);
		std::cin>>c;
		for (int i = 0; i < r; i++)
		{
			std::cin>>map_across[i];
			map_down[i] = map_across[i];
		}
		// find eligible blocks and store its position
		position.clear();
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				// find eligible blocks
				if (map_across[i][j] != '*' && (i - 1 < 0 || j - 1 < 0 || map_across[i-1][j] == '*' || map_across[i][j-1] == '*'))
				{
					tmp.clear();
					tmp.push_back(i);
					tmp.push_back(j);
					position.push_back(tmp);
				}
			}
		}

		std::cout<<"puzzle #"<<count<<":\n";
		// across words
		std::cout<<"Across\n";
		// iterate all eligible positions
		for (int order = 0; order < position.size(); order++)
		{
			if (map_across[position[order][0]][position[order][1]] == '*')
			{
				continue;
			}
			else
			{
				if (order+1 < 10)
					std::cout<<"  "<<order+1<<".";
				else
					std::cout<<" "<<order+1<<".";				
				int pointer = 0;
				while (position[order][1] + pointer < c && map_across[position[order][0]][position[order][1] + pointer] != '*')
				{
					std::cout<< map_across[position[order][0]][position[order][1] + pointer];
					// after output, set the block to '*' to avoid duplicated output
					map_across[position[order][0]][position[order][1] + pointer] = '*';
					pointer++;
				}
				std::cout<<"\n";
			}
			
		}

		// down words
		std::cout<<"Down\n";
		// iterate all eligible positions
		for (int order = 0; order < position.size(); order++)
		{
			if (map_down[position[order][0]][position[order][1]] == '*')
			{
				continue;
			}
			else
			{
				if (order+1 < 10)
					std::cout<<"  "<<order+1<<".";
				else
					std::cout<<" "<<order+1<<".";
				int pointer = 0;
				while (position[order][0] + pointer < r && map_down[position[order][0] + pointer][position[order][1]] != '*')
				{
					std::cout<< map_down[position[order][0] + pointer][position[order][1]];
					// after output, set the block to '*' to avoid duplicated output
					map_down[position[order][0] + pointer][position[order][1]] = '*';
					pointer++;
				}
				std::cout<<"\n";
			}
			
		}

	} 


	return 0;
}