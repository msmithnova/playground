#include "stdafx.h"
#include "CppUnitTest.h"
#include "../InterpolationSearch/InterpolationSearch.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace InterpolationSearchTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestOneElementArrayItemFoundIS1)
		{
			int arr[] = { 1 };
			int result = interpolationSearch1(arr, 1, 1);
			Assert::AreEqual(0, result);
		}

		TEST_METHOD(TestOneElementArrayItemNotFoundIS1)
		{
			int arr[] = { 1 };
			int result = interpolationSearch1(arr, 1, 2);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestTwoElementArrayItemFoundIS1)
		{
			int arr[] = { 1, 2 };
			for (int i = 0; i < 2; i++) {
				int result = interpolationSearch1(arr, 2, arr[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestTwoElementArrayItemNotFoundIS1)
		{
			int arr[] = { 1, 2 };
			int result = interpolationSearch1(arr, 2, 3);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestThreeElementArrayItemFoundIS1)
		{
			int arr[] = { 1, 2, 4 };
			for (int i = 0; i < 3; i++) {
				int result = interpolationSearch1(arr, 3, arr[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestThreeElementArrayItemNotFoundIS1)
		{
			int arr[] = { 1, 2, 4 };
			int result = interpolationSearch1(arr, 3, 3);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestMultiElementArrayItemFoundIS1)
		{
			int arr[] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 };
			for (int i = 0; i < 16; i++) {
				int result = interpolationSearch1(arr, 16, arr[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestMultiElementArrayItemNotFoundIS1)
		{
			int arr[] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 };
			int test[] = { 1, 3, 5, 13, 15, 17, 19, 25, 27, 29 };
			for (int i = 0; i < 10; i++) {
				int result = interpolationSearch1(arr, 16, test[i]);
				Assert::AreEqual(-1, result);
			}
		}

	};
}