// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

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

// First iteration based solely on description and translation to pseudocode.
void fizzBuzz1(int, int);

int main()
{
	fizzBuzz1(1, 100);
    return 0;
}

void fizzBuzz1(int start, int end) {
	std::cout << "Test\n";
}
