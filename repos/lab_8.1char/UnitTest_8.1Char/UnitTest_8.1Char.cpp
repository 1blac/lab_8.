#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1char/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81Char
{
	TEST_CLASS(UnitTest81Char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char A[] = "aa";
			char B[] = "bb";
			char C[] = "cc";
			char* str = "aahfghbbhfghccbbaad";
			int z;
			z = Count(str, A, B, C);
			Assert::AreEqual(z, 2);
		}
	};
}
