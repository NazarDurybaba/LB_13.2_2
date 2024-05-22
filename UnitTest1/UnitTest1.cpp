#include "pch.h"
#include "CppUnitTest.h"
#include "../geometry_macros.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestTriangleArea)
		{
			double a = 3, b = 4, c = 5;
			double expectedArea = 6; // Очікувана площа трикутника

			double area = TRIANGLE_AREA(a, b, c);

			Assert::AreEqual(expectedArea, area);
		}

		TEST_METHOD(TestTrapezoidArea)
		{
			double a = 5, b = 7, h = 4;
			double expectedArea = 24; // Очікувана площа трапеції

			double area = TRAPEZOID_AREA(a, b, h);

			Assert::AreEqual(expectedArea, area);
		}

		TEST_METHOD(TestInvalidTriangle)
		{
			double a = 2, b = 3, c = 6;

			bool isTriangleExist = IS_TRIANGLE_EXIST(a, b, c);

			Assert::IsFalse(isTriangleExist);
		}
	};
}
