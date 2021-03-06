// InterpolationSearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/* Problem Description
Implement the interpolation search algorithm.
*/

/* Analysis
This algorithm can only be used on a sorted array. It has the potential to
perform better than binary search on a uniformly distributed array.
Time Complexity : If elements are uniformly distributed, then O (log log n).
In worst case it can take up to O(n).

Interpolation search calculates pos according the value of key being searched.
The idea of formula is to return higher value of pos when element to be
searched is closer to arr[hi]. And smaller value when closer to arr[lo]
pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]

arr[] ==> Array where elements need to be searched
x     ==> Element to be searched
lo    ==> Starting index in arr[]
hi    ==> Ending index in arr[]
*/

/* Pseudocode
Step1: In a loop, calculate the value of “pos” using the probe position formula.
Step2: If it is a match, return the index of the item, and exit.
Step3: If the item is less than arr[pos], calculate the probe position of the
left sub-array. Otherwise calculate the same in the right sub-array.
Step4: Repeat until a match is found or the sub-array reduces to zero.
*/

// First implementation based on above pseudocode
int interpolationSearch1(int arr[], int size, int elmToFind) {
	int lo = 0;
	int hi = size - 1;
	while (lo <= hi && elmToFind >= arr[lo] && elmToFind <= arr[hi]) {
		int pos;
		// Following line for single element array or duplicate elements
		// although neither make a lot of sense.
		if (arr[lo] == arr[hi]) pos = lo;
		else pos = lo + ((elmToFind - arr[lo])*(hi - lo) / (arr[hi] - arr[lo]));
		if (arr[pos] == elmToFind) return pos;
		if (arr[pos] < elmToFind) lo = pos + 1;
		else hi = pos - 1;
	}
	return -1;
}

int main()
{
	int arr[] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 };
	std::cout << interpolationSearch1(arr, 16, 6) << "\n";
	std::cout << interpolationSearch1(arr, 16, 27) << "\n";
	int arr1[] = { 10, 10, 10, 10, 10 };
	std::cout << interpolationSearch1(arr1, 5, 10) << "\n";
	std::cout << interpolationSearch1(arr1, 5, 5) << "\n";
    return 0;
}

