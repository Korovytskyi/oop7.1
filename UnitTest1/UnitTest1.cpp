#include "pch.h"
#include "CppUnitTest.h"
#include "../7.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			array<int, 100> arr = { 2,1,5,8,4,7,8,6,8,6 };
			Assert::AreEqual(min(arr, 10), 1);
		}
	};
}
