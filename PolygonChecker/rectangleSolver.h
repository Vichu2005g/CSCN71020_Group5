#pragma once
struct Point {
	int x;
	int y;
};

void readPoint(struct Point* pt);
void readRectangle(struct Point *rect);
bool verifyRectangle(struct Point* rect);
void rectangleCalculator(struct Point* rect);