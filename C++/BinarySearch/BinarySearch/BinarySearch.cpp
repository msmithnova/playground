// BinarySearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/* Problem Description
Implement binary search on an array.
*/

/* Analysis
Array must be sorted for binary search to work. Binary search is of O(log(n)).
This is much better than linear search of O(n), however, if you start with an unsorted
array you will have to sort it first with perhaps merge sort of O(n*log(n)).
If you were doing less than log(n) searches on an unsorted array than you could just use
linear search. This is often not the case considering log(n) is only 1 or 2 on small
arrays and only 6 on an array of size one million elements.

With binary search you start at the midpoint. If the number matches you are done. If not
you know whether it is higher or lower and can ignore the other half of the list. You then
choose the midpoint of what is left and check again.
*/

/* Pseudocode
Set start to 0
set end to n - 1
While start <= end
	set midpoint
	if arr[midpoint] == num return midpoint
	else if arr[midpoint] > num set end to midpoint - 1
	else set start to midpoint + 1
Loop ends means num not found, return -1
*/

// First implementation based on above pseudocode
int binarySearch1(int[], int, int);

// Second implementation using recursion
int binarySearch2(int[], int, int, int);

// Helper function to output result
void outputResult(int);

int main()
{
	int size = 15;
	int arr[] = { 1, 3, 5, 8, 11, 15, 22, 27, 34, 41, 55, 62, 78, 83, 99 };
	int result;
	result = binarySearch1(arr, size, 55);
	outputResult(result);
	result = binarySearch1(arr, size, 23);
	outputResult(result);
	result = binarySearch2(arr, 0, size - 1, 55);
	outputResult(result);
	result = binarySearch2(arr, 0, size - 1, 23);
	outputResult(result);
	return 0;
}

int binarySearch1(int arr[], int size, int num) {
	int start = 0;
	int end = size - 1;
	while (start <= end) {
		int midpoint = start + ((end - start) / 2);
		if (arr[midpoint] == num) return midpoint;
		else if (arr[midpoint] > num) end = midpoint - 1;
		else start = midpoint + 1;
	}
	return -1;
}

int binarySearch2(int arr[], int start, int end, int num) {
	if (start <= end) {
		int midpoint = start + ((end - start) / 2);
		if (arr[midpoint] == num) return midpoint;
		if (arr[midpoint] > num) return binarySearch2(arr, start, midpoint - 1, num);
		return binarySearch2(arr, midpoint + 1, end, num);
	}
	return -1;
}

void outputResult(int result) {
	result >= 0 ? std::cout << "Found at: " << result << "\n" : std::cout << "Not found.\n";
}