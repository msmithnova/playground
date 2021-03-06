// VariousProblems.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "NumSubarrays.h"
#include "helper.h"

int main()
{
	int result;

	int arr[] =  { 1, 3, 2 };
	std::string arrAsString = arrayToString(arr, 3);
	outputRunMsg("numSubarrays", arrAsString);
	result = numSubarrays(arr, 3);
	std::cout << "Result: " << result << "\n";

	int arr2[] = { 4, 1, 2, 1 };
	std::string arr2AsString = arrayToString(arr2, 4);
	outputRunMsg("numSubarrays", arr2AsString);
	result = numSubarrays(arr2, 4);
	std::cout << "Result: " << result << "\n";

    return 0;
}

