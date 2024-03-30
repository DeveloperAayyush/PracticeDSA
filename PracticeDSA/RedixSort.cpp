#include "RedixSort.h"
#include "math.h"

void CountSort(vector<int>& arr , int decimalPlace)
{
	int denom = (int)pow(10, decimalPlace);
	int maxNum = arr[0]/ denom % 10;
	for (int i = 1; i < arr.size(); i++)
	{
		if ((arr[i] / denom % 10) > maxNum)
			maxNum = (arr[i] / denom % 10);
	}

	vector<int> newArray(maxNum + 1, 0);

	for (int i = 0; i < arr.size(); i++)
	{
		int index = arr[i] / denom % 10;
		newArray.at(index)++;
	}

	vector<int> newTempArray(0);

	for (int i = 0; i < newArray.size(); i++)
	{
		int j = 0;
		while (newArray[i] > 0)
		{
			if (j < arr.size() && (arr[j] / denom % 10 == i) )
			{
				newTempArray.push_back(arr[j]);
				newArray[i]--;
			}
			j++;
		}
	}

	arr = newTempArray;
	newTempArray.clear();
}

void RedixSort(vector<int>& arr)
{
	int max = arr[0];

	// Find the max element
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	int loopCount = 0;
	while (max > 0)
	{
		max = max / 10;
		loopCount++;
	}

	for (int i = 0; i < loopCount; i++)
	{
		CountSort(arr, i);
	}
}

//int main()
//{
//	vector<int> arr = { 32,134455,7,23,9,99,3,63,646,1,8,234,300000 };
//	//vector<int> arr = { 32,1345,72};
//
//	// 4. Redix Sort
//	cout << "\n UnSorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	RedixSort(arr);
//	cout << "\n Sorted array:- ";
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	return 0;
//}