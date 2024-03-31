#include "BinaryInsertionSort.h"

int BinarySerach(int element, vector<int> arr , int start, int end)
{
	if (start >= end)
	{
		if(arr.size() >start)
			return (element > arr[start]) ? (start + 1) : start;
		else
			return start;
	}
		

	int mid = (start + end) / 2;

	if (element > arr[mid])
		return BinarySerach(element, arr, mid + 1, end);
	else if (element == arr[mid])
		return mid;
	else
		return BinarySerach(element, arr, start, mid -1);
}

void BinaryInsertionSort(vector<int>& arr)
{
	vector<int> sortedArray;

	for (int i = 0; i < arr.size(); i++)
	{
		int position = BinarySerach(arr[i], sortedArray , 0 , sortedArray.size());
		sortedArray.insert(sortedArray.begin() + position, arr[i]);
	}
	arr = sortedArray;
}

//int main()
//{
//	vector<int> arr = { -32,134455,7,23,9,99,3,63,646,1,8,234,-300000 };
//	vector<int> arr = { };
//	//vector<int> arr = { 32,1345,72};
//
//	// 8. BinaryInsertion Sort
//	cout << "\n UnSorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	BinaryInsertionSort(arr);
//	cout << "\n Sorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	return 0;
//}