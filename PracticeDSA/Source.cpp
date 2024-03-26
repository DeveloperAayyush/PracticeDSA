#include "CountSort.h"

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
	vector<int> arr = { 2,1,7,0,9,9,3,6,6 };

	// 3. Count Sort
	cout << "\n UnSorted array:- ";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	CountSort(arr);
	cout << "\n Sorted array:- ";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}