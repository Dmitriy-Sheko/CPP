#include <iostream>

using namespace std;

namespace MyLib
{
	float* CreateAndInitArr(const size_t size)
	{
		float* pArr = new(nothrow) float[size];
		if (pArr != nullptr)
		{
			for (size_t i = 0; i < size; i++)
			{
				pArr[i] = (rand() % 100) - 50.0f;
			}
		}
		return pArr;
	}

	void PrintArr(const float* arr, const size_t size)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void PrintArr(const int* arr, const size_t size)
	{
		cout << arr[0];
		for (size_t i = 1; i < size; i++)
		{
			cout << " " << arr[i];
		}
		cout << endl;
	}

	void PrintPositiveAndNegative(const float* arr, const size_t size)
	{
		size_t pos = 0U, neg = 0U;
		for (size_t i = 0U; i < size; i++)
		{
			if (arr[i] > 0.0f)
			{
				pos++;
			}
			else if (arr[i] < 0.0f)
			{
				neg++;
			}
		}
		cout << "Positive: " << pos << endl << "Negative: " << neg << endl;
	}

	#define SWAP_INT(x, y) int temp = x; x = y; y = temp;
	void SortArr(int* arr, const size_t size)
	{
		for (size_t i = 0; i < size - 1; i++)
		{
			for (size_t j = 0; j < size - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					SWAP_INT(arr[j], arr[j + 1]);
				}
			}
		}
	}

}
