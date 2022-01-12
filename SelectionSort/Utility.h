#ifndef UTILITY_H_
#define UTILITY_H_

namespace Utility
{
	template<typename T>
	void swap(T& ob, T& ob2)
	{
		T temp = ob;
		ob = ob2;
		ob2 = temp;
	}
}

#endif // !UTILITY_H_
