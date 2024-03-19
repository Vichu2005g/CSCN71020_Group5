#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "triangleSolver.h"

#define PI 3.14159265

float radiansToDegrees(float radians) 
{
	return radians * (180.0 / PI);
}

void getAngles(float a, float b, float c)
{
	float angle_a = acos((b * b + c * c - a * a) / (2 * b * c));
	angle_a = radiansToDegrees(angle_a);

	float angle_b = acos((a * a + c * c - b * b) / (2 * a * c));
	angle_b = radiansToDegrees(angle_b);

	float angle_c = acos((a * a + b * b - c * c) / (2 * a * b));
	angle_c = radiansToDegrees(angle_c);

	printf("The angles are %f , %f , %f\n", angle_a, angle_b, angle_c);
}

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = ""; 
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		getAngles(side1, side2, side3);
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) || 
		(side1 == side3 && side1 != side2))
	{
		getAngles(side1, side2, side3);
		result = "Isosceles triangle";
	}
	else {
		getAngles(side1, side2, side3);
		result = "Scalene triangle";
	}

	return result;
}
