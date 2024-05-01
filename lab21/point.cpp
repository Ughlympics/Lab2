#include "point.h"
#include <iostream>
#include <cmath>

Point get_point()
{
	Point p;
	std::cin >> p.x >> p.y;
	if (!std::cin)
		throw std::domain_error("incorrect values");
	return p;
}

void print(Point p)
{
	std::cout << "( " << p.get_x() << ", " << p.get_y() << " )";
}

double Point::distance_to(Point target) const
{
	double dx = x - target.get_x();
	double dy = y - target.get_y();
	return sqrt(dx * dx + dy * dy);
}
