#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.7/Lab_8.1.7.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = ",--gfhdfgh-,m,--,---,";
			Assert::AreEqual(Count(str), 3);

		}
	};
}
