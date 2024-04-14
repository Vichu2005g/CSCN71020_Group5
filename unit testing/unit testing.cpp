#include "pch.h"
#include "CppUnitTest.h"
extern "C" void getAngles(float a, float b, float c);
extern "C" char* analyzeTriangle(int side1, int side2, int side3);
extern "C" void rectangleCalculator(struct Point* rect);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittesting
{
	TEST_CLASS(unittesting)
	{
	public:
		// Unit testing for Triangle Analyzer 

		TEST_METHOD(TestAnalyzeTriangle1)
		{
			char* actual = analyzeTriangle(0, 0, 0);
			char* expected = "Not a triangle";
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestAnalyzeTriangle2)
		{
			char* actual = analyzeTriangle(3, 3, 3);
			char* expected = "Equilateral triangle";
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestAnalyzeTriangle3)
		{
			char* actual = analyzeTriangle(12, 12, 3);
			char* expected = "Isosceles triangle";
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestAnalyzeTriangle4)
		{
			char* actual = analyzeTriangle(3, 5, 9);
			char* expected = "Not a triangle";
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestAnalyzeTriangle5)
		{
			char* actual = analyzeTriangle(7, 7, 0);
			char* expected = "Not a triangle";
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestAnalyzeTriangle6)
		{
			char* actual = analyzeTriangle(-3, 5, 7);
			char* expected = "Not a triangle";
			Assert::AreEqual(expected, actual);

		// Unit testing for Rectangle Analyzer 

		}
	};
}
