#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Admin\Documents\Татарський Василь\LR 5.1\LR 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double expected = (f(x) + f(1 + f(x))) / (1 + f(1 + f(x) * f(x)) * f(1 + f(x) * f(x)));
			double actual = (f(2.0) + f(1 + f(2.0))) / (1 + f(1 + f(2.0) * f(2.0)) * f(1 + f(2.0) * f(2.0)));
			Assert::AreEqual(expected, actual, 1e-9);
		}
	};
}
