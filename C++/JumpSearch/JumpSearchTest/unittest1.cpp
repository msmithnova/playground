#include "stdafx.h"
#include "CppUnitTest.h"
#include "../JumpSearch/JumpSearch.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace JumpSearchTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestOneElementArrayItemFoundJS1)
		{
			int arr[] = { 1 };
			int result = jumpSearch1(arr, 1, 1);
			Assert::AreEqual(0, result);
		}

		TEST_METHOD(TestOneElementArrayItemNotFoundJS1)
		{
			int arr[] = { 1 };
			int result = jumpSearch1(arr, 1, 2);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestTwoElementArrayItemFoundJS1)
		{
			int arr[] = { 1, 2 };
			for (int i = 0; i < 2; i++) {
				int result = jumpSearch1(arr, 2, arr[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestTwoElementArrayItemNotFoundJS1)
		{
			int arr[] = { 1, 2 };
			int result = jumpSearch1(arr, 2, 3);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestThreeElementArrayItemFoundJS1)
		{
			int arr[] = { 1, 2, 4 };
			for (int i = 0; i < 3; i++) {
				int result = jumpSearch1(arr, 3, arr[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestThreeElementArrayItemNotFoundJS1)
		{
			int arr[] = { 1, 2, 4 };
			int result = jumpSearch1(arr, 3, 3);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestMultiElementArrayItemFoundJS1)
		{
			int arr[] = { 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 };
			for (int i = 0; i < 16; i++) {
				int result = jumpSearch1(arr, 16, arr[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestMultiElementArrayItemNotFoundJS1)
		{
			int arr[] = { 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 };
			int test[] = { 4, 7, 11, 17, 33, 44, 77, 111, 333, 444 };
			for (int i = 0; i < 10; i++) {
				int result = jumpSearch1(arr, 16, test[i]);
				Assert::AreEqual(-1, result);
			}
		}

	};
}