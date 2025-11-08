#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB5.1/LAB5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1);
	};
	inline void UnitTest1::TestMethod1()
	{
		int t;
		t = g(2,3,4);
		Assert::AreEqual(t, -3);
	}
} 