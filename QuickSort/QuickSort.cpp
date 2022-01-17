#include <iostream>
#include <vector>

void quickSort(std::vector<int>&, int, int);

namespace Utility
{
    template <typename T>
    void swap(T& a, T& b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
}

//worst case= O(n*n), on average= O(n log n)
void quickSort(std::vector<int>& vec, int first, int last)
{
    //if indexes are out of order return,recursive function
    if (first >= last)
    {
        return;
    }

    int left = first;
    int right = last;

    //making pivot the middle element
    int pivot = vec[(first + last) / 2];

    do
    {
        //else loop will break on right indexes and they will swap
       while (vec[left] < pivot)
       {
           ++left;
       }
       while (vec[right] > pivot)
       {
           --right;
       }
       if (left <= right)
       {
           Utility::swap(vec[left], vec[right]);
           ++left;
           --right;
       }
    } while (left < right);

    quickSort(vec, first, right);
    quickSort(vec, left, last);
}

int main()
{
   std::vector<int>vec{ 6,7,44,8,222,9,10 };
   quickSort(vec, 0, vec.size() - 1);

   for (auto i : vec)
   {
       std::cout << i << " ";
   }
}