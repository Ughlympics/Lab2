#include <iostream>
#include "point.h"
#include "polyline.h"
#include "line.h"
#include "vector"

using namespace std;

int main()
{
	/*try {
		cout << "input x and y" << endl;
		Point p1 = get_point();
		print(p1);
		cout << endl;
		cout << "input x and y" << endl;
		Point p2 = get_point();
		print(p2);
		cout << endl;
		Line line_shape(p1, p2);
		line_shape.printline();
	}
	catch (domain_error e) {
		cout << e.what() << endl;
	}*/

	//cout << endl << endl;

	//try {
	//	cout << "input x1 y1 x2 y2" << endl;
	//	line l = get_line();
	//	printline(l);
	//}
	//catch (domain_error e) {
	//	cout << e.what() << endl;
	//}
	//Point p1(1, 1);
	//Point p2(2, 2);
	//Point p3(3, 3);

	//std::vector<Point> points_line = { p1, p2 };
	//std::vector<Point> points_triangle = { p1, p2, p3 };

	//Polyline line_shape(points_line);
	//Polyline triangle_shape(points_triangle);

	//Point p5(1, 1);
	//Point p6(2, 2);
	//Point p7(2, 3);

	// Create
	//Line linerr(p5, p6);
	//Triangle tri(p5, p6, p7);

	// Elemet input
	//linerr.printline();
	//linerr.printpointstart();
	//tri.printtriangle();
	//tri.printpoint2triangle();


	system("pause");
	return 0;
}