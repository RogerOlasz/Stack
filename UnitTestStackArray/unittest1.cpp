#include "stdafx.h"
#include "CppUnitTest.h"

#include "../Stack/StackArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestStackArray
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestOne)
		{
			StackArray<float> SA1;

			SA1.PushBack(10.f);
			SA1.PushBack(8.f);
			
			Assert::IsTrue(SA1.allocated_items == 2);
			Assert::IsTrue(SA1.Peek(1) == 8.f);

			SA1.Pop();

			Assert::IsTrue(SA1.allocated_items == 1);
			Assert::IsTrue(SA1.Peek(0) == 10.f);
		}

	};
}