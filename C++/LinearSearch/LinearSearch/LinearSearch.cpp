// LinearSearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/* Problem Description
Implement linear search.
*/

/* Analysis
Find a number in an array and return its index. If number is not found, return -1.
Array does not need to be sorted.
Algorithm is of O(n)
*/

/* Pseudocode
Loop through each element of array
	If element equals number searched for
		return index
Loop ended without finding number so return -1
*/

// First implementation based on above pseudocode
int linearSearch1(int[], int, int);

int main()
{
	int size = 15;
	int arr[] = { 1, 3, 5, 7, 9, 11, 15, 23, 34, 42, 55, 67, 74, 82, 98 };
	int result;
	result = linearSearch1(arr, size, 55);
	result >= 0 ? std::cout << "Found at: " << result << "\n" : std::cout << "Not found.\n";
	result = linearSearch1(arr, size, 22);
	result >= 0 ? std::cout << "Found at: " << result << "\n" : std::cout << "Not found.\n";
	return 0;
}

int linearSearch1(int arr[], int size, int num) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) {
			return i;
		}
	}
	return -1;
}
