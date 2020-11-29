#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81r
{
	TEST_CLASS(UnitTest81r)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char cs[] = "aabbcc";
			char* str = "aahfghbbhfghccbbaad";
			int z;
			z = Count(str, cs);
			Assert::AreEqual(z, 5);
		}
	};
}
