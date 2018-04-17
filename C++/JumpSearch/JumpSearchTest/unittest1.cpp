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

		TEST_METHOD(TestOneElementArrayItemFoundJS2)
		{
			std::array<int, 1> arr { 1 };
			int result = jumpSearch2(arr, 1);
			Assert::AreEqual(0, result);
		}

		TEST_METHOD(TestOneElementArrayItemNotFoundJS2)
		{
			std::array<int, 1> arr { 1 };
			int result = jumpSearch2(arr, 2);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestTwoElementArrayItemFoundJS2)
		{
			std::array<int, 2> arr { 1, 2 };
			for (int i = 0; i < 2; i++) {
				int result = jumpSearch2(arr, arr[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestTwoElementArrayItemNotFoundJS2)
		{
			std::array<int, 2> arr { 1, 2 };
			int result = jumpSearch2(arr, 3);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestThreeElementArrayItemFoundJS2)
		{
			std::array<int, 3> arr { 1, 2, 4 };
			for (int i = 0; i < 3; i++) {
				int result = jumpSearch2(arr, arr[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestThreeElementArrayItemNotFoundJS2)
		{
			std::array<int, 3> arr { 1, 2, 4 };
			int result = jumpSearch2(arr, 3);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestMultiElementArrayItemFoundJS2)
		{
			std::array<int, 16> arr { 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 };
			for (int i = 0; i < 16; i++) {
				int result = jumpSearch2(arr, arr[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestMultiElementArrayItemNotFoundJS2)
		{
			std::array<int, 16> arr { 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 };
			std::array<int, 10> test { 4, 7, 11, 17, 33, 44, 77, 111, 333, 444 };
			for (int i : test) {
				int result = jumpSearch2(arr, i);
				Assert::AreEqual(-1, result);
			}
		}

		TEST_METHOD(TestOneElementArrayItemFoundJS3)
		{
			std::vector<int> vec { 1 };
			int result = jumpSearch3(vec, 1);
			Assert::AreEqual(0, result);
		}

		TEST_METHOD(TestOneElementArrayItemNotFoundJS3)
		{
			std::vector<int> vec { 1 };
			int result = jumpSearch3(vec, 2);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestTwoElementArrayItemFoundJS3)
		{
			std::vector<int> vec { 1, 2 };
			for (int i = 0; i < 2; i++) {
				int result = jumpSearch3(vec, vec[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestTwoElementArrayItemNotFoundJS3)
		{
			std::vector<int> vec { 1, 2 };
			int result = jumpSearch3(vec, 3);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestThreeElementArrayItemFoundJS3)
		{
			std::vector<int> vec { 1, 2, 4 };
			for (int i = 0; i < 3; i++) {
				int result = jumpSearch3(vec, vec[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestThreeElementArrayItemNotFoundJS3)
		{
			std::vector<int> vec { 1, 2, 4 };
			int result = jumpSearch3(vec, 3);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(TestMultiElementArrayItemFoundJS3)
		{
			std::vector<int> vec { 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 };
			for (int i = 0; i < 16; i++) {
				int result = jumpSearch3(vec, vec[i]);
				Assert::AreEqual(i, result);
			}
		}

		TEST_METHOD(TestMultiElementArrayItemNotFoundJS3)
		{
			std::vector<int> vec { 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 };
			std::vector<int> test { 4, 7, 11, 17, 33, 44, 77, 111, 333, 444 };
			for (int i : test) {
				int result = jumpSearch3(vec, i);
				Assert::AreEqual(-1, result);
			}
		}

	};
}