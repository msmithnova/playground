// BubbleSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/* Problem Description
Write a program to implement the Bubble Sort Algorithm.
*/

/* Analysis
Bubble Sort loops through the array swapping adjacent numbers if necessary.
It does this until there are no swaps during a loop.
Worst case scenario: each loop requires n-1 compare/swap and this loop may need
to be done n-1 times resulting in a O(n^2) time complexity.
*/

/* Pseudocode
For i = 0 to i = n-1
	Set swap to false
	For j = 0 to j = n-1.
		If arr[j] is greater than arr[j+1] then swap them and set swap to true.
	If swap is false we can break out early.
*/

// First implementation based on above pseudocode
void bubbleSort1(int[], int);

// Second implementation based on the fact that each loop can do one less compare since
// after loop 1 the highest number is at the end, loop 2 the second highest is, etc
void bubbleSort2(int[], int);

// Helper function to output array
void outputArray(int[], int);

int main()
{
	int size = 10;
	int arr[] = { 64, 33, 16, 5, 3, 8, 12, 23, 55, 7 };
	bubbleSort1(arr, size);
	outputArray(arr, size);
	int arr2[] = { 64, 33, 16, 5, 3, 8, 12, 23, 55, 7 };
	bubbleSort1(arr2, size);
	outputArray(arr2, size);
    return 0;
}

void bubbleSort1(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		bool swap = false;
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				swap = true;
			}
		}
		if (!swap) break;
	}
}

void bubbleSort2(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		bool swap = false;
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				swap = true;
			}
		}
		if (!swap) break;
	}
}

void outputArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i];
		if (i == size - 1) {
			std::cout << "\n";
		}
		else {
			std::cout << ", ";
		}
	}
}