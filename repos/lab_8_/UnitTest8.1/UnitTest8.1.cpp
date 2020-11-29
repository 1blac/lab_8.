#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* str = "aahfghbbhfghccbbaad";
			int z;
			z = Count(str);
			Assert::AreEqual(z, 5);
		}
	};
}
