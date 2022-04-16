#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/2/lab_2.3/lab_2.3/LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong l(12, 14);
			Assert::AreEqual(26.0, l.getOlder() + l.getYounger());
		}
	};
}
