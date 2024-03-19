#pragma once
struct Point {
	int x;
	int y;
};

void readRectangle(struct Point *rect);
bool verifyRectangle(struct Point* rect);
void rectangleCalculator(struct Point* rect);