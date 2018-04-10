#include "stdafx.h"
#include "CppUnitTest.h"
#include "../BinarySearch/BinarySearch.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BinarySearchTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestNumInArrayBS1)
		{
			int arr[] = { 1, 3, 5, 8, 11, 15, 22, 27, 34, 41, 55, 62, 78, 83, 99 };
			int size = sizeof(arr) / sizeof(arr[0]);
			int result = binarySearch1(arr, size, 55);
			Assert::AreEqual(result, 10);
		}

		TEST_METHOD(TestNumNotInArrayBS1)
		{
			int arr[] = { 1, 3, 5, 8, 11, 15, 22, 27, 34, 41, 55, 62, 78, 83, 99 };
			int size = sizeof(arr) / sizeof(arr[0]);
			int result = binarySearch1(arr, size, 23);
			Assert::AreEqual(result, -1);
		}

		TEST_METHOD(TestNumAtStartBS1)
		{
			int arr[] = { 1, 3, 5, 8, 11, 15, 22, 27, 34, 41, 55, 62, 78, 83, 99 };
			int size = sizeof(arr) / sizeof(arr[0]);
			int result = binarySearch1(arr, size, 1);
			Assert::AreEqual(result, 0);
		}

		TEST_METHOD(TestNumAtEndBS1)
		{
			int arr[] = { 1, 3, 5, 8, 11, 15, 22, 27, 34, 41, 55, 62, 78, 83, 99 };
			int size = sizeof(arr) / sizeof(arr[0]);
			int result = binarySearch1(arr, size, 99);
			Assert::AreEqual(result, 14);
		}

		TEST_METHOD(TestNumInArrayBS2)
		{
			int arr[] = { 1, 3, 5, 8, 11, 15, 22, 27, 34, 41, 55, 62, 78, 83, 99 };
			int size = sizeof(arr) / sizeof(arr[0]);
			int result = binarySearch2(arr, 0, size - 1, 55);
			Assert::AreEqual(result, 10);
		}

		TEST_METHOD(TestNumNotInArrayBS2)
		{
			int arr[] = { 1, 3, 5, 8, 11, 15, 22, 27, 34, 41, 55, 62, 78, 83, 99 };
			int size = sizeof(arr) / sizeof(arr[0]);
			int result = binarySearch2(arr, 0, size - 1, 23);
			Assert::AreEqual(result, -1);
		}

		TEST_METHOD(TestNumAtStartBS2)
		{
			int arr[] = { 1, 3, 5, 8, 11, 15, 22, 27, 34, 41, 55, 62, 78, 83, 99 };
			int size = sizeof(arr) / sizeof(arr[0]);
			int result = binarySearch2(arr, 0, size - 1, 1);
			Assert::AreEqual(result, 0);
		}

		TEST_METHOD(TestNumAtEndBS2)
		{
			int arr[] = { 1, 3, 5, 8, 11, 15, 22, 27, 34, 41, 55, 62, 78, 83, 99 };
			int size = sizeof(arr) / sizeof(arr[0]);
			int result = binarySearch2(arr, 0, size - 1, 99);
			Assert::AreEqual(result, 14);
		}

	};
}