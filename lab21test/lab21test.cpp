
#include "CppUnitTest.h"
#include "..\lab21\\point.h"
#include "..\lab21\\Line.h"
#include "..\lab21\\triangle.h"
#include "..\lab21\\polyline.h"
#include "..\lab21\\builder.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab21test
{
	TEST_CLASS(lab21test)
	{
	public:

		TEST_METHOD(DefaultConstructorTest)
		{
			Point p1;
			Assert::IsTrue(p1.get_x() == 0, L"Assert 1");
			Assert::IsTrue(p1.get_y() == 0, L"Assert 2");
		}
		TEST_METHOD(ParameterConstructorTest)
		{
			Point p1(5, 3);
			Assert::IsTrue(p1.get_x() == 5);
			Assert::IsTrue(p1.get_y() == 3);
		}
		TEST_METHOD(DistanceTests)
		{
			Point p1(0, 0);
			Point p2(0, 1);
			double result = 1;
			Assert::IsTrue(abs(p1.distance_to(p2) - result) < precision);
			p2.set_x(0); p2.set_y(0);
			result = 0;
			Assert::IsTrue(abs(p1.distance_to(p2) - result) < precision);
			p1.set_x(2); p1.set_y(4);
			p2.set_x(3); p2.set_y(5);
			result = sqrt(2);
			Assert::IsTrue(abs(p1.distance_to(p2) - result) < precision);
			p1.set_x(0); p1.set_y(3);
			p2.set_x(4); p2.set_y(2);
			result = sqrt(17);
			Assert::IsTrue(abs(p1.distance_to(p2) - result) < precision);
		}
		TEST_METHOD(LineTests)
		{
			Point p1(1.0, 1.0);
			Point p2(2.0, 2.0);
			//std::vector<Point> x {p1, p2};
			//Polyline pol(x);
			Line* line = Builder::createLine(p1, p2);
			Line l = *line ;
			Point lol = l.get_endpoint();
			Assert::IsTrue(lol.get_x() == 2);

			//std::string a = "Start: (1.000000, 1.000000)\n";
			//std::string b = l.printpointstart();
			//Assert::AreSame(a, b);
		}
		TEST_METHOD(TriangleTests)
		{
			Point p1(1, 1);
			Point p2(2, 2);
			Point p3(2, 3);
			Triangle t(p1, p2, p3);
			std::string a = "Point2: (2.000000, 2.000000)\n";
			std::string b = t.printpoint2triangle();
			Assert::AreSame(a, b);
		}
		TEST_METHOD(PolylineTests)
		{
			Point p1(1, 2);
			Point p2(2, 3);
			Point p3(3, 4);
			std::vector<Point> points_line = { p1, p2 };
			std::vector<Point> points_triangle = { p1, p2, p3 };
			std::string a = "hi";
			std::string b = "a";
			
		}
	};
}
