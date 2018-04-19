#include "stdafx.h"
#include "CppUnitTest.h"
#include "../VariousProblems/NumSubarrays.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{		
	TEST_CLASS(NumSubarraysTests)
	{
	public:
		
		TEST_METHOD(TestNumSubarrays1)
		{
			int arr[] = { 1, 3, 2 };
			int result = numSubarrays(arr, 3);
			Assert::AreEqual(4, result);
		}

		TEST_METHOD(TestNumSubarrays2)
		{
			int arr[] = { 4, 1, 2, 1 };
			int result = numSubarrays(arr, 4);
			Assert::AreEqual(5, result);
		}

		TEST_METHOD(TestNumSubarrays3)
		{
			int arr[] = { 1, 2, 3, 2, 1, 2, 3 };
			int result = numSubarrays(arr, 7);
			Assert::AreEqual(10, result);
		}

		TEST_METHOD(TestNumSubarrays4)
		{
			int arr[] = { 4, 2, 1, 1, 2, 4 };
			int result = numSubarrays(arr, 6);
			Assert::AreEqual(8, result);
		}

		TEST_METHOD(TestNumSubarrays5)
		{
			int arr[] = { 5, 4, 3, 2, 1, 2, 3, 4, 5, 2, 1, 3 };
			int result = numSubarrays(arr, 12);
			Assert::AreEqual(15, result);
		}

	};
}