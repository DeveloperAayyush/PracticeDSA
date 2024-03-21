#include "MergeSort.h"

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
	int arr[10] = { -20,100,13,14,13,-36,14,100,200,10000 };

	// 1. Merge Sort
	MergeSort(arr);
	cout << "\n Sorted array:- ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i];
	}
	return 0;
}