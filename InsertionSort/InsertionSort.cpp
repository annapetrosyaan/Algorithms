#include <iostream>
#include <vector>

void InsertionSort(std::vector<int>& vec)
{
	int value{};
	for (int i = 1; i < vec.size(); ++i)
	{
		value = vec[i];
		int j = i - 1;
		while (j >= 0 && vec[j] > value)
		{
			vec[j + 1] = vec[j];
			j -= 1;
		}
		vec[j + 1] = value;
	}	
}