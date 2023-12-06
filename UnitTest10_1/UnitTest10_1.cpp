#include "pch.h"
#include "CppUnitTest.h"
#include "../PR10_1/PR10_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char s[151] = "ono";

			bool res = Check(s);

			Assert::AreEqual(res, true);
		}
	};
}
