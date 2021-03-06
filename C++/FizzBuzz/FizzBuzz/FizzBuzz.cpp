// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

/* Problem Description
Write a program that prints the numbers from 1 to 100.
But for multiples of three print "Fizz" instead of the number
and for the multiples of five print "Buzz". For numbers which
are multiples of both three and five print "FizzBuzz".
*/

/* Analysis
Since we have to access each number to at least print it the best
we can hope for is an O(n) solution.
*/

/* Pseudocode
Loop through numbers from 1 to 100.
If number is multiple of 3 and 5 print "FizzBuzz"
Else if number is multiple of 3 print "Fizz"
Else if number is multiple of 5 print "Buzz"
Else print number.
*/

// First implementation based solely on description and translation to pseudocode.
void fizzBuzz1(int, int);

// Second implementation to avoid some code duplication
void fizzBuzz2(int, int);

int main()
{
	fizzBuzz1(1, 100);
	fizzBuzz2(1, 100);
    return 0;
}

// Used parameters to make testing easier
void fizzBuzz1(int start, int end) {
	for (int i = start; i <= end; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "FizzBuzz\n";
		}
		else if (i % 3 == 0) {
			std::cout << "Fizz\n";
		}
		else if (i % 5 == 0) {
			std::cout << "Buzz\n";
		}
		else {
			std::cout << i << "\n";
		}
	}
}

void fizzBuzz2(int start, int end) {
	for (int i = start; i <= end; i++) {
		std::string output = "";
		if (i % 3 == 0) {
			output += "Fizz";
		}
		if (i % 5 == 0) {
			output += "Buzz";
		}
		if (output == "") {
			output = std::to_string(i);
		}
		std::cout << output << "\n";
	}
}