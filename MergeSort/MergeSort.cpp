#include <iostream>
#include <vector>
#include <iterator>

void sort(std::vector<int>&);
void mergeSort(std::vector<int>&, std::vector<int>&, std::vector<int>&);

int main()
{
    std::vector<int>vec{ 3,98,4,-1,56,9,78 };

    sort(vec);

    for (auto it : vec)
    {
        std::cout << it << " ";
    }
}

//time complexity worst case O(n log n)
void sort(std::vector<int>& v)
{
    if (v.size() <= 1) //recursive
    {
        return;
    }

    int mid = v.size() / 2;

    std::vector<int>start; //first subarray
    std::vector<int>end;   //last

    start.reserve(mid);
    end.reserve(v.size() - mid);

    for (int i = 0; i < mid; ++i)
    {
        start.push_back(v[i]);
    }
    for (int j = 0; j < (v.size()) - mid; ++j)
    {
        end.push_back(v[mid + j]);
    }

    //sorting subarrays
    sort(start);
    sort(end);

    //final sort
    mergeSort(v, start, end);
}

void mergeSort(std::vector<int>& vec, std::vector<int>& start, std::vector<int>& end)
{
    int ssize = start.size();
    int esize = end.size();

    int i{},j{}, k{};

    while (j < ssize && k < esize)
    {
        if (start[j] < end[k])
        {
            vec[i] = start[j];
            ++j;
        }
        else
        {
            vec[i] = end[k];
            ++k;
        }
        ++i;
    }

    //if there are remaining elements
    while (j < ssize)
    {
        vec[i] = start[j];
        ++j, ++i;
    }

    while (k < esize)
    {
        vec[i] = end[k];
        ++k; ++i;
    }
}
