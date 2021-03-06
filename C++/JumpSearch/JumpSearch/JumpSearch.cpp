// JumpSearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <vector>

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

// Second implementation using std::array
template<std::size_t SIZE>
int jumpSearch2(std::array<int, SIZE> & arr, int elmToFind) {
	int size = arr.size();
	int jumpSize = sqrt(size);
	int idx = 0;
	// Need to check idx < size first to avoid index out of bounds
	// The above implementation is actually flawed because of this but works.
	while (idx < size && arr[idx] <= elmToFind) {
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

// Third implementation using std::vector
int jumpSearch3(std::vector<int> & vec, int elmToFind) {
	int size = vec.size();
	int jumpSize = sqrt(size);
	int idx = 0;
	while (idx < size && vec[idx] <= elmToFind) {
		if (vec[idx] == elmToFind) return idx;
		idx += jumpSize;
	}
	int start = idx - jumpSize + 1;
	int end = idx > size ? size : idx;
	for (int i = start; i < end; ++i) {
		if (vec[i] == elmToFind) return i;
	}
	return -1;
}

int main()
{
	int arr[] = { 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 };
	std::cout << jumpSearch1(arr, 16, 144) << "\n";
	std::cout << jumpSearch1(arr, 16, 77) << "\n";
	std::array<int, 16> arr2 { 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 };
	std::cout << jumpSearch2(arr2, 144) << "\n";
	std::cout << jumpSearch2(arr2, 77) << "\n";
	std::vector<int> vec { 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 };
	std::cout << jumpSearch3(vec, 144) << "\n";
	std::cout << jumpSearch3(vec, 77) << "\n";
	return 0;
}

