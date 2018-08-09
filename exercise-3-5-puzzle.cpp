#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> a;
	int puzzle_id = 0;
	std::vector<char> move;
	std::vector<char>::iterator it;
	char tmp;
	int legal_flag;
	int empty_r, empty_c;

	a.resize(5);
	

	while (std::getline(std::cin, a[0]) && a[0][0] != 'Z')
	{
		puzzle_id += 1;
		move.clear();
		legal_flag = 1;
		;
		for (int i = 0; i < 5; i++)
			{
				if (i != 0)
				{
					std::getline(std::cin, a[i]);
				}
				
				for (int j = 0; j < 5; j++)
				{
					if (a[i][j] == ' ')
					{
						empty_r = i;
						empty_c = j;
					}
				}
			}
		while (scanf("%c", &tmp) && tmp != '0')
		{
			move.push_back(tmp);
		}
		scanf("%c", &tmp); // skip \n
		for (it = move.begin(); it < move.end(); it++)
		{
			if (*it == 'A')
			{
				// check if illegal 
				if (empty_r == 0)
				{
					// if illegal, break to while loop
					legal_flag = 0;
					break;
				}
				else
				{
					// if legal, move
					a[empty_r][empty_c] = a[empty_r - 1][empty_c];
					a[empty_r - 1][empty_c] = ' ';
					// update empty position
					empty_r -= 1;
				}
			}
			else if (*it == 'B')
			{
				// check if illegal 
				if (empty_r == 4)
				{
					// if illegal, break to while loop
					legal_flag = 0;
					break;
				}
				else
				{
					// if legal, move
					a[empty_r][empty_c] = a[empty_r + 1][empty_c];
					a[empty_r + 1][empty_c] = ' ';
					// update empty position
					empty_r += 1;
				}
			}
			else if (*it == 'R')
			{
				// check if illegal 
				if (empty_c == 4)
				{
					// if illegal, break to while loop
					legal_flag = 0;
					break;
				}
				else
				{
					// if legal, move
					a[empty_r][empty_c] = a[empty_r][empty_c + 1];
					a[empty_r][empty_c + 1] = ' ';
					// update empty position
					empty_c += 1;
				}

			}
			else if (*it == 'L')
			{
				// check if illegal 
				if (empty_c == 0)
				{
					// if illegal, break to while loop
					legal_flag = 0;
					break;
				}
				else
				{
					// if legal, move
					a[empty_r][empty_c] = a[empty_r][empty_c - 1];
					a[empty_r][empty_c - 1] = ' ';
					// update empty position
					empty_c -= 1;
				}
			}
		}

		if (legal_flag)
		{
			// output 
			if (puzzle_id != 1)
			{
				std::cout<<"\n";
			}
			std::cout<<"Puzzle #"<<puzzle_id<<":\n";
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (j == 0)
					{
						std::cout<<a[i][j];
					}
					else
					{
						std::cout<<" "<<a[i][j];
					}
					
				}
				std::cout<<"\n";
			}
		}
		else
		{
			// output
			if (puzzle_id != 1)
			{
				std::cout<<"\n";
			}
			std::cout<<"Puzzle #"<<puzzle_id<<":\n";
			std::cout<<"This puzzle has no final configuration.\n";
		}

		a.clear();
		a.resize(5);
		
		
	}


	return 0;
}