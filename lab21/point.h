#pragma once
const double precision = 1E-10;

struct Point {
private:
	double x, y;
public:
	//contruct with parameters 
	Point(double x, double y) { this->x = x; this->y = y; }
	//contruct without parameters 
	Point() : Point(0.0, 0.0) {}

	//access to closed fields
	double get_x() const { return x; }
	double get_y() const { return y; }

	//change  methods
	void set_x(double x) { this->x = x; }
	void set_y(double y) { this->y = y; }

	// distant founding
	double distance_to(Point target) const;

	friend Point get_point();
};

void print(Point p);

Point get_point();
