#include <iostream>
#include <cmath>
#include "polyline.h"
#include "point.h"

Polyline::Polyline(std::vector<Point> points)
{
	_points = points;
}