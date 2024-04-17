#include "pch.h"
#include "CppUnitTest.h"
extern "C" void getAngles(float a, float b, float c, float arr[]);
extern "C" char* analyzeTriangle(int side1, int side2, int side3);
extern "C" void rectangleCalculator(struct Point* rect);
extern "C" bool verifyRectangle(struct Point* rect);

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

		}
		// Unit testing for Triangle inside angle

		TEST_METHOD(TriangleInsideAngle1) {
			float Actual_angle_1, Actual_angle_2, Actual_angle_3;
			float angles[3];
			getAngles(3, 3, 3, angles);

			const float Expected_angle_1 = 60;
			const float Expected_angle_2 = 60;
			const float Expected_angle_3 = 60;

			Actual_angle_1 = angles[0];
			Actual_angle_2 = angles[1];
			Actual_angle_3 = angles[2];
			
			Assert::AreEqual(Expected_angle_1, round(Actual_angle_1));
			Assert::AreEqual(Expected_angle_2, round(Actual_angle_2));
			Assert::AreEqual(Expected_angle_3, round(Actual_angle_3));

		}

		TEST_METHOD(TriangleInsideAngle2) {
			float Actual_angle_1, Actual_angle_2, Actual_angle_3;
			float angles[3];
			getAngles(5, 3, 4, angles);

			const float Expected_angle_1 = 90;
			const float Expected_angle_2 = 37;
			const float Expected_angle_3 = 53;

			Actual_angle_1 = angles[0];
			Actual_angle_2 = angles[1];
			Actual_angle_3 = angles[2];

			Assert::AreEqual(Expected_angle_1, round(Actual_angle_1));
			Assert::AreEqual(Expected_angle_2, round(Actual_angle_2));
			Assert::AreEqual(Expected_angle_3, round(Actual_angle_3));

		}

		TEST_METHOD(TriangleInsideAngle3) {
			float Actual_angle_1, Actual_angle_2, Actual_angle_3;
			float angles[3];
			getAngles(3, 5, 7, angles);

			const float Expected_angle_1 = 22;
			const float Expected_angle_2 = 38;
			const float Expected_angle_3 = 120;

			Actual_angle_1 = angles[0];
			Actual_angle_2 = angles[1];
			Actual_angle_3 = angles[2];

			Assert::AreEqual(Expected_angle_1, round(Actual_angle_1));
			Assert::AreEqual(Expected_angle_2, round(Actual_angle_2));
			Assert::AreEqual(Expected_angle_3, round(Actual_angle_3));

		}

		/*TEST_METHOD(RectangleTest1)
		{
			struct Point {
				int x;
				int y;
			};

			struct Point rect;
			verifyRectangle(&rect);
			printf_s("Rectangle selected.\n");

			struct Point rectanglePoints[4] = {
				{0, 0},
				{0, 0},
				{0, 0},
				{0, 0}
			};

			if (verifyRectangle(rectanglePoints) == false)
				printf_s("Invalid rectangle points\n");
		}*/
	};
}
