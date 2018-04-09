#include "stdafx.h"
#include "CppUnitTest.h"
#include "../BubbleSort/BubbleSort.cpp"
#include <array>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BubbleSortTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestOneElementArrayBS1)
		{
			int arr[]{ 1 };
			bubbleSort1(arr, 1);
			int expected[] = { 1 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestTwoElementArrayBS1)
		{
			int arr[] = { 3, 1 };
			bubbleSort1(arr, 2);
			int expected[] = { 1, 3 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestFiveElementArrayBS1)
		{
			int arr[] = { 5, 1, 4, 2, 8 };
			bubbleSort1(arr, 5);
			int expected[] = { 1, 2, 4, 5, 8 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestSixElementArrayBS1)
		{
			int arr[] = { 5, 10, 3, 2, 4, 1 };
			bubbleSort1(arr, 6);
			int expected[] = { 1, 2, 3, 4, 5, 10 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestReversedArrayBS1)
		{
			int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
			bubbleSort1(arr, 10);
			int expected[] =  { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestOneElementArrayBS2)
		{
			int arr[]{ 1 };
			bubbleSort1(arr, 1);
			int expected[] = { 1 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestTwoElementArrayBS2)
		{
			int arr[] = { 3, 1 };
			bubbleSort1(arr, 2);
			int expected[] = { 1, 3 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestFiveElementArrayBS2)
		{
			int arr[] = { 5, 1, 4, 2, 8 };
			bubbleSort1(arr, 5);
			int expected[] = { 1, 2, 4, 5, 8 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestSixElementArrayBS2)
		{
			int arr[] = { 5, 10, 3, 2, 4, 1 };
			bubbleSort1(arr, 6);
			int expected[] = { 1, 2, 3, 4, 5, 10 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

		TEST_METHOD(TestReversedArrayBS2)
		{
			int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
			bubbleSort1(arr, 10);
			int expected[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			Assert::IsTrue(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
		}

	};
}