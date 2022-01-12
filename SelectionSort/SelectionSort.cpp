#include <iostream>
#include <vector>
#include <iterator>

//for swap function
#include "Utility.h"

void SelectionSort(std::vector<int>v)
{
	int min{};
	for (int i = 0; i < v.size(); ++i)
	{
		min = i;
		for (int j = i + 1; j < v.size(); ++j)
		{
			if(v[min] > v[j])
			{
				min = j;
			}
		}
		Utility::swap(v[min], v[i]);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << " ";
	}
}


int main()
{
	std::vector<int>vec{ 5,3,18,1,3,4,15 };
	SelectionSort(vec);
}