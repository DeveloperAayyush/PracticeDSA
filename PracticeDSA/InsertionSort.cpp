#include "InsertionSort.h"


void InsertionSort(vector<int>& arr)
{
	vector<int> sortedArray;

	for (int i = 0; i < arr.size(); i++)
	{
		bool inserted = false;
		for (int j = 0; j < sortedArray.size(); j++)
		{
			if (arr[i] < sortedArray[j])
			{
				sortedArray.insert(sortedArray.begin() + j, arr[i]);
				inserted = true;
				break;
			}
		}

		if (!inserted)
		{
			sortedArray.push_back(arr[i]);
		}
	}
	arr = sortedArray;
}

//
//int main()
//{
//	vector<int> arr = { -32,134455,7,23,9,99,3,63,646,1,8,234,-300000 };
//	//vector<int> arr = { 32,1345,72};
//
//	// 7. Insertion Sort
//	cout << "\n UnSorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	InsertionSort(arr);
//	cout << "\n Sorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	return 0;
//}