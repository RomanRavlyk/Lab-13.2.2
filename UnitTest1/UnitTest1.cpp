#include "pch.h"
#include "CppUnitTest.h"
#include "math.h"
#include "../Lab 13.2.2/math.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest132p2
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int test = ADD(89, 1);
			Assert::AreEqual(90, test);
		}
	};
}