#include "pch.h"
#include "CppUnitTest.h"
#include "../PR 6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Sum = 0;
			const int n = 21;
			int b[n] = { 70,  51,  70,  31,  70,  22,  26,  30,  85,  48,  18,  25,  78,  46,  88,  29,  82,  71,  37,  62,  87, };
			s(b, n, Sum, 0);

			Assert::AreEqual(536, Sum);
		}
	};
}
