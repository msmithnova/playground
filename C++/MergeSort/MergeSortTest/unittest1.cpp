#include "stdafx.h"
#include "CppUnitTest.h"
#include "../MergeSort/MergeSort.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MergeSortTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestOneElementArrayMS1)
		{
			int arr[] = { 1 };
			mergeSort1(arr, 0, 0);
			int expected[] = { 1 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestTwoElementArrayMS1)
		{
			int arr[] = { 3, 1 };
			mergeSort1(arr, 0, 1);
			int expected[] = { 1, 3 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestSevenElementArrayMS1)
		{
			int arr[] = { 4, 9, 7, 6, 5, 3, 1 };
			mergeSort1(arr, 0, 6);
			int expected[] = { 1, 3, 4, 5, 6, 7, 9 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestEightElementArrayMS1)
		{
			int arr[] = { 4, 9, 7, 6, 5, 3, 1, 2 };
			mergeSort1(arr, 0, 7);
			int expected[] = { 1, 2, 3, 4, 5, 6, 7, 9 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestReversedArrayMS1)
		{
			int arr[] = { 9, 7, 6, 5, 4, 3, 2, 1 };
			mergeSort1(arr, 0, 7);
			int expected[] = { 1, 2, 3, 4, 5, 6, 7, 9 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

	};
}