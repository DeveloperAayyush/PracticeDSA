#include "MergeSort.h"

vector<int> MergeSort(vector<int>& arr, int startIndex, int endIndex)
{
	vector<int> mergedArray;
	for (int i = startIndex; i <= endIndex; i++)
	{
		mergedArray.push_back(arr[i]);
	}

	startIndex = 0;
	int midIndex = mergedArray.size() / 2 - 1;
	endIndex = mergedArray.size() -1;
	// Base case
	if (endIndex <= startIndex)
	{
		return mergedArray;
	}
	
	vector<int> leftArray = MergeSort(mergedArray, startIndex, midIndex);		// Left half
	vector<int> rightArray = MergeSort(mergedArray, (midIndex + 1), endIndex);	// Right half

	int i = 0;
	int j = 0;
	int k = 0;
	while (i < leftArray.size() && j < rightArray.size())
	{
		if (leftArray[i] <= rightArray[j])
		{
			mergedArray[k] = leftArray[i];
			i++;
			k++;
		}
		else
		{
			mergedArray[k] = rightArray[j];
			j++;
			k++;
		}
	}

	while (i < leftArray.size())
	{
		mergedArray[k] = leftArray[i];
		i++;
		k++;
	}

	while (j < rightArray.size())
	{
		mergedArray[k] = rightArray[j];
		j++;
		k++;
	}

	return mergedArray;
}