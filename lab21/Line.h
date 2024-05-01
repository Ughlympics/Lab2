#pragma once 
#include "point.h"
#include <iostream>
#include <string>
#include "polyline.h"
class Line: public Polyline{
private:
	Point start, end;
public:
	//contruct with parameters 
	//line(double x1, double y1, double x2, double y2) { this->x1 = x1; this->y1 = y1; this->x2 = x2; this->y2 = y2; }
	//contruct without parameters 
	//line() : line(0.0, 0.0, 0.0, 0.0) {}
	//Line(const Point& start, const Point& end) : start(start), end(end) {}

	Line(Point start, Point end) 
		:Polyline(std::vector<Point> {start, end})
	{

	}

	void printline() const
	{
		std::cout << "Start: (" << start.get_x() << ", " << start.get_y() << ")" << std::endl;
		std::cout << "End: (" << end.get_x() << ", " << end.get_y() << ")" << std::endl;
		/*std::string result;
		result += "Start: (" + std::to_string(start.get_x()) + ", " + std::to_string(start.get_y()) + ")\n";
		result += "End: (" + std::to_string(end.get_x()) + ", " + std::to_string(end.get_y()) + ")\n";
		std::cout << result;
		return result;*/
	}
	//void printpointstart() const
	//{
	//	std::cout << "Start: (" << start.get_x() << ", " << start.get_y() << ")" << std::endl;
	//}
	std::string printpointstart() const
	{
		std::string result;
		result += "Start: (" + std::to_string(start.get_x()) + ", " + std::to_string(start.get_y()) + ")\n";
		std::cout << result;
		return result;
	}

	void printpointend() const
	{
		std::cout << "End: (" << end.get_x() << ", " << end.get_y() << ")" << std::endl;
	}
	void chozer() override {
		std::cout << "Line" << std::endl;
	}

	Point get_endpoint() {
		return end;
	}

	//access to closed fields
	//double get_x1() const { return x1; }
	//double get_y1() const { return y1; }
	//double get_x2() const { return x2; }
	//double get_y2() const { return y2; }

	//change  methods
	//void set_x1(double x1) { this->x1 = x1; }
	//void set_y1(double y1) { this->y1 = y1; }
	//void set_x2(double x2) { this->x2 = x2; }
	//void set_y2(double y2) { this->y2 = y2; }


	//friend line get_line();

};

//void printline(line l);

//line get_line();

