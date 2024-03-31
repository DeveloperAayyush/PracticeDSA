#include "BinaryInsertionSort.h"

/*
1. Merge Sort
2. Quick Sort
3. Count Sort
4. Redix Sort
5. Selection Sort
6. Bubble Sort
7. Insertion Sort
8. Binary Sort
9. Heap Sort
10. Recursion problems
11. Dynamic Programming problems
12. Backtracting problems
13. DFS 
14. BFS
15. TRIE problems
*/

int main()
{
	vector<int> arr = { -32,134455,7,23,9,99,3,63,646,1,8,234,-300000};
	vector<int> arr = { };
	//vector<int> arr = { 32,1345,72};

	// 8. BinaryInsertion Sort
	cout << "\n UnSorted array:- ";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	BinaryInsertionSort(arr);
	cout << "\n Sorted array:- ";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}