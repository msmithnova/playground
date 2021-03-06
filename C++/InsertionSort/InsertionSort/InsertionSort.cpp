// InsertionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>

/* Problem Description
Implement the insertion sort algorithm.
*/

/* Analysis
Select each element in the array starting at either end and moving towards the other.
I will start at the front (top) and the first element will be index 1.
For each element keep moving it towards the front as long as the element before it is larger.
Or, in other words, move the previous item toward the end if it is larger. Thinking of it 
that way will produce a slightly more efficient algorithm.
This algorithm is of O(n^2) either way.
*/

/* Pseudocode
for i = 1 to i = n
	set key to arr[i]
	set j to i - 1
	while j >= 0 and arr[j] > key
		set arr[j + 1] to arr[j]
		decrement j
	set arr[j + 1] to key
*/

// First implementation base on above pseudocode.
void insertionSort1(int[], int);

// Helper function to output array
void outputArray(int[], int);

int main()
{
	int size = 8;
	int arr[] = { 4, 3, 2, 10, 12, 1, 5, 6 };
	insertionSort1(arr, size);
	outputArray(arr, size);
    return 0;
}

void insertionSort1(int arr[], int size) {
	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

void outputArray(int arr[], int size) {
	std::stringstream ss;
	for (int i = 0; i < size; i++) {
		ss << arr[i];
		if (i == size - 1) {
			ss << "\n";
		}
		else {
			ss << ", ";
		}
	}
	std::cout << ss.str();
}