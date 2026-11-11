#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_08_1 IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081IT
{
	TEST_CLASS(UnitTest081IT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
                char str[15] = "abcdeabcd";

                int count = Count(str);
                Assert::AreEqual(2, count);

                char* dest = Change(str);

                Assert::AreEqual("**de**d", dest);

                delete[] dest;
		}
	};
}
