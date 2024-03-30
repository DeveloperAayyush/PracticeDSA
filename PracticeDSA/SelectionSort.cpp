#include "SelectionSort.h"

void SelectionSort(vector<int>& arr)
{
	int i = 0;
	while (i < arr.size() - 1)
	{
		int j = i + 1;
		while (j < arr.size())
		{
			if (arr[j] < arr[i])
				swap(arr[i], arr[j]);

			j++;
		}
		i++;
	}
}

//int main()
//{
//	vector<int> arr = { 32,134455,7,23,9,99,3,63,646,1,8,234,300000 };
//	//vector<int> arr = { 32,1345,72};
//
//	// 5. Selection Sort
//	cout << "\n UnSorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	SelectionSort(arr);
//	cout << "\n Sorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	return 0;
//}