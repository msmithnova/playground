// MergeSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/* Problem Description
Implement merge sort algorithm.
*/

/* Analysis
Time complexity is O(n*log(n)) but it requires O(n) extra space.
Recursively slpit array and then merge each pair of arrays.
*/

/* Pseudocode
mergeSort:
	sort left subarray
	sort right subarray
	merge the two arrays

merge:
	set index to each array to 0
	set index of merge array to 0
	while not at the end of either array
		compare values at indexes and add smallest to merge array
	add any leftover items in the other array
*/

// First implementation based on above pseudocode
void mergeSort1(int[], int, int);
void merge1(int[], int, int, int);

// Helper function to output result
void outputResult(int[], int);

int main()
{
	int arr[] = { 4, 9, 7, 6, 5, 3, 1, 2 };
	int size = sizeof(arr) / sizeof(arr[0]);
	mergeSort1(arr, 0, size - 1);
	outputResult(arr, size);
    return 0;
}

void mergeSort1(int arr[], int start, int end) {
	if (start < end) {
		int mid = start + (end - start) / 2;
		mergeSort1(arr, start, mid);
		mergeSort1(arr, mid + 1, end);
		merge1(arr, start, mid, end);
	}
}

void merge1(int arr[], int start, int mid, int end) {
	int leftSize = mid - start + 1;
	int rightSize = end - mid;
	int * leftTemp = new int[leftSize];
	int * rightTemp = new int[rightSize];
	for (int i = 0; i < leftSize; i++) {
		leftTemp[i] = arr[start + i];
	}
	for (int i = 0; i < rightSize; i++) {
		rightTemp[i] = arr[mid + 1 + i];
	}
	int leftIndex = 0;
	int rightIndex = 0;
	int mergedIndex = start;
	while (leftIndex < leftSize && rightIndex < rightSize) {
		if (leftTemp[leftIndex] <= rightTemp[rightIndex]) {
			arr[mergedIndex] = leftTemp[leftIndex];
			leftIndex++;
		}
		else {
			arr[mergedIndex] = rightTemp[rightIndex];
			rightIndex++;
		}
		mergedIndex++;
	}

	// Take care of leftover items
	while (leftIndex < leftSize) {
		arr[mergedIndex] = leftTemp[leftIndex];
		leftIndex++;
		mergedIndex++;
	}
	while (rightIndex < rightSize) {
		arr[mergedIndex] = rightTemp[rightIndex];
		rightIndex++;
		mergedIndex++;
	}
	delete(leftTemp);
	delete(rightTemp);
}

void outputResult(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i];
		i < size - 1 ? std::cout << ", " : std::cout << "\n";
	}
}