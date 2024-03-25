#include "QuickSort.h"

/*
1. Merge Sort
2. Quick Sort
3. Count Sort
4. Redix Sort
5. Selection Sort
6. Bubble Sort
7. Insertion Sort
8. Recursion problems
9. Dynamic Programming problems
10. Backtracting problems
11. DFS 
12. BFS
13. TRIE problems
*/

int main()
{
	vector<int> arr = { -20,100,13,14,13,-36,14,100,200,-10000 };
	//vector<int> arr = { -20,13,14,13,-36,200, -10000 };
	//vector<int> arr = { -20,100,-36 };
	//vector<int> arr = { -100};

	// 1. Quick Sort
	int startIndex = 0;
	int endIndex = (int)(arr.size() - 1);
	cout << "\n UnSorted array:- ";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	QuickSort(arr, startIndex, endIndex, false);
	cout << "\n Sorted array:- ";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}