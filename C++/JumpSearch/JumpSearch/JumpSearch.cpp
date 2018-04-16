// JumpSearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/* Problem Desciption
Implement the jump search algorithm.
*/

/* Analysis
Time complexity is O(sqrt(n)). Optimal jump size is sqrt(n).
Array must be sorted. Start at index 0 and jump by jump size until
element found or arr[index] > element. Then perform linear search 
between current jump and previous jump.
*/

/* Pseudocode
jumpSize = sqrt(size)
index = 0
while (arr[index] < elmToFind and index < size)
	if arr[index] = elmToFind return index
	index += jumpSize
start = index - jumpSize + 1
end = index - 1 or size if index > size
Perform linear search between start and end
return -1 if not found
*/

// First implementation based on above pseudocode
int jumpSearch1(int arr[], int size, int elmToFind) {
	int jumpSize = sqrt(size);
	int idx = 0;
	while (arr[idx] <= elmToFind && idx < size) {
		if (arr[idx] == elmToFind) return idx;
		idx += jumpSize;
	}
	int start = idx - jumpSize + 1;
	int end = idx > size ? size : idx;
	for (int i = start; i < end; ++i) {
		if (arr[i] == elmToFind) return i;
	}
	return -1;
}

int main()
{
	int arr[] = { 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 };
	std::cout << jumpSearch1(arr, 16, 144) << "\n";
	std::cout << jumpSearch1(arr, 16, 77) << "\n";
	return 0;
}

