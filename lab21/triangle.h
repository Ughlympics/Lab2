#pragma once 
#include "point.h"
#include <iostream>
#include <string>
#include "polyline.h"

class Triangle: public Polyline
{
private:
    Point point1, point2, point3;

public:
    /*Triangle(const Point& point1, const Point& point2, const Point& point3)
        : point1(point1), point2(point2), point3(point3) {}*/
	Triangle(Point a, Point b, Point c)
		: Polyline(std::vector<Point> {a, b, c})
	{
		/*this->point1 = a;
		this->point2 = b;
		this->point3 = c;*/
	}

	void printtriangle() const
	{
		std::cout << "Point1: (" << point1.get_x() << ", " << point1.get_y() << ")" << std::endl;
		std::cout << "Point2: (" << point2.get_x() << ", " << point2.get_y() << ")" << std::endl;
		std::cout << "Point3: (" << point3.get_x() << ", " << point3.get_y() << ")" << std::endl;
	}

	std::string printpoint2triangle() const
	{
		std::string result;
		result += "Point2: (" + std::to_string(point2.get_x()) + ", " + std::to_string(point2.get_y()) + ")\n";
		std::cout << result;
		return result;
	}

	void chozer() override {
		std::cout << "Triangle" << std::endl;
	}

};

