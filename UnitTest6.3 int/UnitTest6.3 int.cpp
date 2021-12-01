#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication6.3 i/ConsoleApplication6.3 i.cpp"
#define arraySize(a) (sizeof(a)/sizeof((a)[0]))


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63int
{
	TEST_CLASS(UnitTest63int)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 10;
			int a[size];
			Create(a, size, 1, 10);
			int s = arraySize(a);
			Assert::AreEqual(size, s, 0.01);
		}
	};
}
