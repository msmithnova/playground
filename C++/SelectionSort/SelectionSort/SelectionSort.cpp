// SelectionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/* Problem Description
Implement the selection sort algorithm.
*/

/* Analysis
Find the smallest item in array and move it to position 0
First element in considered as being in sorted portion
Find the next smallest and move it to position 1
First two elements are considered as being in sorted portion
Keep going as above until end of array
This algorithm is of O(n^2)
*/

/* Pseudocode
for i = 0 to i = n - 1
	set smallest to arr[i]
	set index of smallest to i
	for j = i + 1 to j = n - 1
		if arr[j] smaller than smallest
			set smallest to this number
			set index of smallest to this index
	if smallest index is not equal to i
		swap elements
*/

// First iplementation of algorithm based on above pseudocode.
void selectionSort1(int[], int);

// Second implementation, we can just store the index and get smallest from that
// This means we need a temp variable in the swap but it is likely used less than smallest
void selectionSort2(int[], int);

// Helper function to output array
void outputArray(int[], int);

int main()
{
	int size = 12;
	int arr[] = { 98, 33, 45, 67, 21, 11, 9, 53, 5, 1, 13, 52 };
	selectionSort1(arr, size);
	outputArray(arr, size);
	int arr2[] = { 98, 33, 45, 67, 21, 11, 9, 53, 5, 1, 13, 52 };
	selectionSort1(arr2, size);
	outputArray(arr2, size);
    return 0;
}

void selectionSort1(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		int smallest = arr[i];
		int index = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < smallest) {
				smallest = arr[j];
				index = j;
			}
		}
		if (index != i) {
			arr[index] = arr[i];
			arr[i] = smallest;
		}
	}
}

void selectionSort2(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		int smallestIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[smallestIndex]) {
				smallestIndex = j;
			}
		}
		if (smallestIndex != i) {
			int temp = arr[smallestIndex];
			arr[smallestIndex] = arr[i];
			arr[i] = temp;
		}
	}
}

void outputArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i];
		i == size - 1 ? std::cout << "\n" : std::cout << ", ";
	}
}