#include "pch.h"
#include "CppUnitTest.h"
extern "C" void getAngles(double a, double b, double c, double arr[]);
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

		}
		// Unit testing for Triangle inside angle

		TEST_METHOD(TriangleInsideAngle1) {
			double Actual_angle_1, Actual_angle_2, Actual_angle_3;
			double angles[3];
			getAngles(3, 3, 3, angles);

			const double Expected_angle_1 = 60;
			const double Expected_angle_2 = 60;
			const double Expected_angle_3 = 60;

			Actual_angle_1 = angles[0];
			Actual_angle_2 = angles[1];
			Actual_angle_3 = angles[2];
			
			Assert::AreEqual(Expected_angle_1, Actual_angle_1);
			Assert::AreEqual(Expected_angle_2, Actual_angle_2);
			Assert::AreEqual(Expected_angle_3, Actual_angle_3);

		}

		TEST_METHOD(TriangleInsideAngle2) {
			double Actual_angle_1, Actual_angle_2, Actual_angle_3;
			double angles[3];
			getAngles(5, 3, 4, angles);

			const double Expected_angle_1 = 90;
			const double Expected_angle_2 = 36.87;
			const double Expected_angle_3 = 53.13;

			Actual_angle_1 = angles[0];
			Actual_angle_2 = angles[1];
			Actual_angle_3 = angles[2];

			Assert::AreEqual(Expected_angle_1, Actual_angle_1);
			Assert::AreEqual(Expected_angle_2, Actual_angle_2);
			Assert::AreEqual(Expected_angle_3, Actual_angle_3);

		}

		/*TEST_METHOD(TriangleInsideAngle3) {
			float Actual_angle_1, Actual_angle_2, Actual_angle_3;
			float angles[3];
			getAngles(0, 0, 0, angles);

			const float Expected_angle_1 = 0;
			const float Expected_angle_2 = 0;
			const float Expected_angle_3 = 0;

			Actual_angle_1 = angles[0];
			Actual_angle_2 = angles[1];
			Actual_angle_3 = angles[2];

			Assert::AreEqual(Expected_angle_1, Actual_angle_1);
			Assert::AreEqual(Expected_angle_2, Actual_angle_2);
			Assert::AreEqual(Expected_angle_3, Actual_angle_3);

		}

		TEST_METHOD(TriangleInsideAngle4) {
			float Actual_angle_1, Actual_angle_2, Actual_angle_3;
			float angles[3];
			getAngles(0, 0, 0, angles);

			const float Expected_angle_1 = 0;
			const float Expected_angle_2 = 0;
			const float Expected_angle_3 = 0;

			Actual_angle_1 = angles[0];
			Actual_angle_2 = angles[1];
			Actual_angle_3 = angles[2];

			Assert::AreEqual(Expected_angle_1, Actual_angle_1);
			Assert::AreEqual(Expected_angle_2, Actual_angle_2);
			Assert::AreEqual(Expected_angle_3, Actual_angle_3);

		}

		TEST_METHOD(TriangleInsideAngle5) {
			float Actual_angle_1, Actual_angle_2, Actual_angle_3;
			float angles[3];
			getAngles(0, 0, 0, angles);

			const float Expected_angle_1 = 0;
			const float Expected_angle_2 = 0;
			const float Expected_angle_3 = 0;

			Actual_angle_1 = angles[0];
			Actual_angle_2 = angles[1];
			Actual_angle_3 = angles[2];

			Assert::AreEqual(Expected_angle_1, Actual_angle_1);
			Assert::AreEqual(Expected_angle_2, Actual_angle_2);
			Assert::AreEqual(Expected_angle_3, Actual_angle_3);

		}

		TEST_METHOD(TriangleInsideAngle6) {
			float Actual_angle_1, Actual_angle_2, Actual_angle_3;
			float angles[3];
			getAngles(0, 0, 0, angles);

			const float Expected_angle_1 = 0;
			const float Expected_angle_2 = 0;
			const float Expected_angle_3 = 0;

			Actual_angle_1 = angles[0];
			Actual_angle_2 = angles[1];
			Actual_angle_3 = angles[2];

			Assert::AreEqual(Expected_angle_1, Actual_angle_1);
			Assert::AreEqual(Expected_angle_2, Actual_angle_2);
			Assert::AreEqual(Expected_angle_3, Actual_angle_3);

		}*/

		TEST_METHOD(RectangleTest1)
		{

		}
	};

}
