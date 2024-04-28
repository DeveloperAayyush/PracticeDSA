#include "HeapSort.h"

void CreateHeap(vector<int>& arr, int start, int end)
{
	// starting after leaving the leaf nodes.
	for (int i = end/2 ; i > 0; i--)
	{
		Heapify(arr, i, end);
	}
}

void Heapify(vector<int>& arr , int i, int end)
{
	int left = 2 * i;
	int right = 2 * i + 1;
	int largest = i;
	if (left < end && arr[left] > arr[largest])
	{
		largest = left;
	}

	if (right < end && arr[right] > arr[largest])
	{
		largest = right;
	}

	if (largest != i)
	{
		swap(arr[largest], arr[i]);
		Heapify(arr, largest, end);
	}
}

void HeapSort(vector<int>& arr)
{
	CreateHeap(arr, 0, arr.size() -1);
	int size = arr.size();
	for (int i = size - 1; i > 1;i--)
	{
		swap(arr[i], arr[1]);
		CreateHeap(arr, 0, i);
	}
}

void DeleteNode(vector<int>& arr)
{
	int i = arr.size() - 1;
	arr[1] = arr[i];
	arr.erase(arr.begin() + i);
	CreateHeap(arr, 0, arr.size());
}

void InsertNode(int value, vector<int>& arr)
{
	arr.push_back(value);
	CreateHeap(arr, 0, arr.size());
}

