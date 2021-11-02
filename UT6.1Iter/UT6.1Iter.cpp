#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.1Iter/Lab_06_1_Iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT61Iter
{
	TEST_CLASS(UT61Iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const int k = 3;
			int a[k] = { 1, 2, 3 };
			t = Sum(a, k);
			Assert::AreEqual(t, 6.);
		}
	};
}
