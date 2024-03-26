#include "CountSort.h"

void CountSort(vector<int>& arr)
{
	int maxNum = arr[0];
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] > maxNum)
			maxNum = arr[i];
	}

	vector<int> newArray(maxNum + 1, 0);

	for (int i = 0; i < arr.size(); i++)
	{
		int index = arr[i];
		newArray.at(index)++;
	}

	arr.clear();

	for (int i = 0; i < newArray.size(); i++)
	{
		while (newArray[i] > 0)
		{
			arr.push_back(i);
			newArray[i]--;
		}
	}

}


//int main()
//{
//	vector<int> arr = { 2,1,7,0,9,9,3,6,6 };
//
//	// 3. Count Sort
//	cout << "\n UnSorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	CountSort(arr);
//	cout << "\n Sorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	return 0;
//}