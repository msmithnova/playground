#include "stdafx.h"
#include <iostream>
#include <string>

std::string arrayToString(int arr[], int size) {
	std::string result = "";
	result += "[ ";
	for (int i = 0; i < size; i++) {
		result += std::to_string(arr[i]);
		i < size - 1 ? result += ", " : result += " ]";
	}
	return result;
}

void outputRunMsg(const char * functionName, std::string input) {
	std::cout << "Running " << functionName << " on: " << input.c_str() << "\n";
}