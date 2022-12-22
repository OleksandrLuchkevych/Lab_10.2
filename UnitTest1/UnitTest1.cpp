#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10.2/Lab_10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string stingToCount{ "hi...kl" };
			string t = Change(stingToCount);
			string l{ "hi...Kl" };
			Assert::AreEqual(t, l);
		}
	};
}
