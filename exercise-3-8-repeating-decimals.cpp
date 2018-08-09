#include <iostream>
#include <string>
#include <vector>


int main()
{
	double num, den;
	double value;
	std::string s;
	int pointer;
	int period;
	while (std::cin>>num && std::cin>>den)
	{
		// 抓住小数计算的特征，一上来容易走错方向，例如先计算，然后转化为字符串，然后暴力求解循环长度
		// 记录每次除法的余数，如果出现重复的余数，则循环了
		// 数组记录是否出现该余数，例如余数3，则a[3]来记录，有记录的位置每次更新一位后加1，没有记录的保持为0，累加后的数可以作为循环长度
	}

	return 0;
}