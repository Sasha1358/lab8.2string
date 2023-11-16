
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.2string/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82string
{
	TEST_CLASS(UnitTest82string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string input1 = "sds dded";
			int expected1 = 2;
			Assert :: AreEqual(CountWords(input1), expected1);
		}
	};
}
