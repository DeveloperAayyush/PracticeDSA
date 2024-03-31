#include "BubbleSort.h"


void BubbleSort(vector<int>& arr)
{
	bool changesDone = true;

	while (changesDone)
	{
		changesDone = false;
		for (int i = 0; i < arr.size() - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				changesDone = true;
			}
		}
	}
}

//int main()
//{
//	vector<int> arr = { -32,134455,7,23,9,99,3,63,646,1,8,234,-300000 };
//	//vector<int> arr = { 32,1345,72};
//
//	// 6. Bubble Sort
//	cout << "\n UnSorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	BubbleSort(arr);
//	cout << "\n Sorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	return 0;
//}