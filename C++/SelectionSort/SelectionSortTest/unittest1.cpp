#include "stdafx.h"
#include "CppUnitTest.h"
#include "../SelectionSort/SelectionSort.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SelectionSortTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestOneElementArraySS1)
		{
			int arr[] = { 1 };
			selectionSort1(arr, 1);
			int expected[] = { 1 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestTwoElementArraySS1)
		{
			int arr[] = { 2, 1 };
			selectionSort1(arr, 2);
			int expected[] = { 1, 2 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestTwelveElementArraySS1)
		{
			int arr[] = { 98, 33, 45, 67, 21, 11, 9, 53, 5, 1, 13, 52 };
			selectionSort1(arr, 12);
			int expected[] = { 1, 5, 9, 11, 13, 21, 33, 45, 52, 53, 67, 98 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestReversedArraySS1)
		{
			int arr[] = { 98, 87, 75, 63, 55, 41, 32, 26, 13, 9, 5, 1 };
			selectionSort1(arr, 12);
			int expected[] = { 1, 5, 9, 13, 26, 32, 41, 55, 63, 75, 87, 98 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestOneElementArraySS2)
		{
			int arr[] = { 1 };
			selectionSort2(arr, 1);
			int expected[] = { 1 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestTwoElementArraySS2)
		{
			int arr[] = { 2, 1 };
			selectionSort2(arr, 2);
			int expected[] = { 1, 2 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestTwelveElementArraySS2)
		{
			int arr[] = { 98, 33, 45, 67, 21, 11, 9, 53, 5, 1, 13, 52 };
			selectionSort2(arr, 12);
			int expected[] = { 1, 5, 9, 11, 13, 21, 33, 45, 52, 53, 67, 98 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestReversedArraySS2)
		{
			int arr[] = { 98, 87, 75, 63, 55, 41, 32, 26, 13, 9, 5, 1 };
			selectionSort2(arr, 12);
			int expected[] = { 1, 5, 9, 13, 26, 32, 41, 55, 63, 75, 87, 98 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

	};
}