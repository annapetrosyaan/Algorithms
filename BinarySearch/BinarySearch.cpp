/*Binary search both 
recursive and standard*/

#include <iostream>
#include <vector>

int BinarySearch(std::vector<int> &v, int key)
{
	int start = 0 , end = v.size()-1;
	while (start <= end)  //if they become equal break
	{
		int mid = (start + end) / 2 ;
	     if(key > v[mid])
		{
			start = mid + 1;
		}
		 else if(key<v[mid])
		{
			end = mid - 1;
		}
		 else
		 {
			 return mid;
		 }
	}
	return -1;
}

int RecBinSearch(std::vector<int>& vec, int key, int start, int end)
{
	if (start <= end)
	{
		int mid = (start + end) / 2;
		if (vec[mid] == key)
		{
			return mid;
		}
		if (vec[mid] < key)
		{
			return RecBinSearch(vec,key, mid + 1, end);
		}
		if (vec[mid] > key)
		{
			 return RecBinSearch(vec, key, start, mid - 1);
		}
	}
	return -1;
}

int main()
{
	std::vector<int> vec{ 12,34,35,36,60,70,87,90 };
	int key =70;
	int min{}, mid=vec.size()-1;
	std::cout << BinarySearch(vec, key)<<std::endl;
	std::cout << RecBinSearch(vec, key, min, mid);
}