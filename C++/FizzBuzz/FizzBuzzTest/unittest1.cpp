#include "stdafx.h"
#include "CppUnitTest.h"
#include "../FizzBuzz/FizzBuzz.cpp"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FizzBuzzTest
{		
	TEST_CLASS(UnitTest1)
	{
		std::stringstream ss;
	public:
		TEST_METHOD_INITIALIZE(RedirectCout) {
			std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
			std::cout.rdbuf(ss.rdbuf()); //redirect std::cout to ss
		}

		TEST_METHOD(TestMultipleOf3_FB1)
		{
			fizzBuzz1(2, 4);
			Assert::AreEqual("2\nFizz\n4\n", ss.str().c_str());
		}

		TEST_METHOD(TestMultipleOf5_FB1)
		{
			fizzBuzz1(4, 7);
			Assert::AreEqual("4\nBuzz\nFizz\n7\n", ss.str().c_str());
		}

		TEST_METHOD(TestMultipleOf3And5_FB1)
		{
			fizzBuzz1(14, 16);
			Assert::AreEqual("14\nFizzBuzz\n16\n", ss.str().c_str());
		}

		TEST_METHOD(TestMultipleOf3_FB2)
		{
			fizzBuzz2(2, 4);
			Assert::AreEqual("2\nFizz\n4\n", ss.str().c_str());
		}

		TEST_METHOD(TestMultipleOf5_FB2)
		{
			fizzBuzz2(4, 7);
			Assert::AreEqual("4\nBuzz\nFizz\n7\n", ss.str().c_str());
		}

		TEST_METHOD(TestMultipleOf3And5_FB2)
		{
			fizzBuzz2(14, 16);
			Assert::AreEqual("14\nFizzBuzz\n16\n", ss.str().c_str());
		}

		TEST_METHOD_CLEANUP(RestoreCout) {
			std::cout.rdbuf(ss.rdbuf()); //restore old buf
		}

	};
}