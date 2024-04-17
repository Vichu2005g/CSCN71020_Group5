#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "rectangleSolver.h"

void readPoint(struct Point* pt)
{
	printf_s("Enter the (x,y) of the point: ");
	scanf_s("%d, %d", &pt->x, &pt->y);

}
void readRectangle(struct Point* rect)
{
	printf_s("Please enter the points from the top left going clockwise\n");
	for (int i = 0; i < 4; ++i)
		readPoint(&rect[i]);
}

bool verifyRectangle(struct Point* rect)
{
	if (rect[0].x != rect[3].x)
		return false;
	if (rect[1].x != rect[2].x)
		return false;
	if (rect[0].y != rect[1].y)
		return false;
	if (rect[2].y != rect[3].y)
		return false;
	else
		return true;

}

void rectangleCalculator(struct Point* rect)
{
	int side1 = 0;
	int side2 = 0;

	side1 = abs(rect[0].x - rect[1].x);
	side2 = abs(rect[0].y - rect[2].y);

	int perimeter = side1 * 2 + side2 * 2;
	printf_s("the rectangle perimeter equals: %d\n", perimeter);

	int area = side1 * side2;
	printf_s("the rectangle area equals: %d\n", area);
}

