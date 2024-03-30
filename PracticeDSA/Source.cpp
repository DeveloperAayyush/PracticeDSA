#include "RedixSort.h"

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
	vector<int> arr = { 32,134455,7,23,9,99,3,63,646,1,8,234,300000};
	//vector<int> arr = { 32,1345,72};

	// 4. Redix Sort
	cout << "\n UnSorted array:- ";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	RedixSort(arr);
	cout << "\n Sorted array:- ";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}