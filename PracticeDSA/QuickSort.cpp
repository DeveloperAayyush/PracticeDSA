#include "QuickSort.h"

int Partition(vector<int>& arr, int startIndex, int endIndex)
{
	int index = startIndex + 1;
	int count = startIndex;

	while (index <= endIndex)
	{
		if (arr[index] < arr[startIndex])
			count++;

		cout << "\n index - " << index
			<< "\t arr[index]:" << arr[index];

		index++;
	}

	swap(arr[startIndex], arr[count]);

	int i = startIndex;
	int j = endIndex;

	// Bad method where in each elemnt on left side of pivot is compared to each element on th right.
	/*for (int i = startIndex; i < count; i++)
	{
		for (int j = endIndex; j > count; j--)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}*/


	// Good method where in only elemnts less than pivot on left and greater than pivot on right are comepared.
	while (i < count && j > count)
	{
		while (arr[i] < arr[count])
		{
			i++;
		}

		while (arr[j] > arr[count])
		{
			j--;
		}

		if (i < count && j>count)
			swap(arr[i++], arr[j--]);
	}


	return count;
}

void QuickSort(vector<int>& arr, int startIndex, int endIndex, bool isRight)
{
	if (endIndex <= startIndex)
		return;

	cout << "\n Calling partition"<<(isRight?" right":" left");
	int pIndex = Partition(arr, startIndex, endIndex);
	QuickSort(arr, startIndex, pIndex, false);			// Left Partition sorting
	QuickSort(arr, pIndex + 1, endIndex, true);		// Right Partition sorting
}