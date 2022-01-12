#include <iostream>
#include <vector>
#include <iterator>

//Header for swap function
#include "Utility.h"

void BubbleSort(std::vector<int> &v)
{
	for (auto it =v.begin(); it != v.end(); ++it)
	{
		for ( auto ij= v.begin(); ij < it; ++ij)
		{
			if (*it < *ij)
			{
				Utility::swap(*it, *ij);
			}
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << " ";
	}
}

int main()
{
	std::vector<int>vec{ 2,45,6,3,88,4,7,8,9 };
	BubbleSort(vec);
}