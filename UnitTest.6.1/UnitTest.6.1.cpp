#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab.6.1/Lab.6.1.cpp"
#include "../Lab.6.1/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			TArray a = new Array::value_type[4];
			a[0] = 1;
			a[1] = 2;
			a[2] = 3;
			a[3] = 4;
			Array result = Calc(4, a);
			Assert::AreEqual(result[0], 10.);
			Assert::AreEqual(result[1], 2.5);
		}
	};
}
