#include "stdafx.h"
#include "NumSubarrays.h"

/* Problem Description
 * Find the number of subarrays for which product and sum are equal.
 */

/* Analysis
 * Given an array of n numbers. We need to count the number of subarrays
 * which have the same product and sum. Subarrays may be of length 1 to n.
 * ie: subarrays of [1, 2, 3] are [1, 2, 3], [1, 2], [2, 3], [1], [2], and [3].
 */

/* Pseudocode
 * Initialize count to 0
 * Loop through array and initialize sum and product to first element
 * Loop through array starting at next element and calculate sums and products
 * If sum = product increase count
 * return count + size
 */

int numSubarrays(int arr[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		int sum = arr[i];
		int product = arr[i];
		for (int j = i + 1; j < size; j++) {
			sum += arr[j];
			product *= arr[j];
			if (sum == product) count++;
		}
	}
	// Add size if including arrays of size 1 as original problem
	// Can you really have a sum or product of a single number?
	return count + size;
}