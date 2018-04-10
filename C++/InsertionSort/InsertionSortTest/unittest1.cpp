#include "stdafx.h"
#include "CppUnitTest.h"
#include "../InsertionSort/InsertionSort.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace InsertionSortTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestOneElementArrayIS1)
		{
			int arr[] = { 1 };
			insertionSort1(arr, 1);
			int expected[] = { 1 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestTwoElementArrayIS1)
		{
			int arr[] = { 2, 1 };
			insertionSort1(arr, 2);
			int expected[] = { 1, 2 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestEightElementArrayIS1)
		{
			int arr[] = { 4, 3, 2, 10, 12, 1, 5, 6 };
			insertionSort1(arr, 8);
			int expected[] = { 1, 2, 3, 4, 5, 6, 10, 12 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestReversedArrayIS1)
		{
			int arr[] = { 100, 64, 55, 42, 31, 27, 25, 19, 13, 11, 9, 7, 6, 4, 1 };
			insertionSort1(arr, 15);
			int expected[] = { 1, 4, 6, 7, 9, 11, 13, 19, 25, 27, 31, 42, 55, 64, 100 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

	};
}