#include "stdafx.h"
#include "CppUnitTest.h"
#include "../LinearSearch/LinearSearch.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LinearSearchTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestElementInArrayLS1)
		{
			int arr[] = { 1, 3, 5, 7, 9, 11, 15, 23, 34, 42, 55, 67, 74, 82, 98 };
			int result = linearSearch1(arr, 15, 55);
			Assert::AreEqual(result, 10);
		}

		TEST_METHOD(TestElementNotInArrayLS1)
		{
			int arr[] = { 1, 3, 5, 7, 9, 11, 15, 23, 34, 42, 55, 67, 74, 82, 98 };
			int result = linearSearch1(arr, 15, 22);
			Assert::AreEqual(result, -1);
		}

	};
}