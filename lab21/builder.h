#pragma once 
#include <iostream>
#include <vector>
#include <string>
#include "point.h"
#include "triangle.h"
#include "line.h"
#include "polyline.h"




//class builder
//{
//public:
//
//    builder(const std::vector<Point>& points) {
//        std::string result = "hi";
//        if (points.size() == 2) {
//            line = new Line(points[0], points[1]);
//            std::cout << result << std::endl;
//
//        }
//        else if (points.size() == 3) {
//            triangle = new Triangle(points[0], points[1], points[2]);
//            std::cout << "Triangle  produce!" << std::endl;
//        }
//        else {
//            std::cerr << "AAAAAAAAAAAAAAAAAAA" << std::endl;
//
//        }
//    }
//
//protected:
//    Line* line = nullptr;
//    Triangle* triangle = nullptr;
//};

class Builder {
public:
    
    static Polyline* createObject(const std::vector<Point>& points) {
        if (points.size() <= 1) {
            throw std::invalid_argument("Invalid number of points: must be at least 2");
        }
        else if (points.size() == 2) {
            return new Line(points[0], points[1]);
        }
        else if (points.size() == 3) {
            std::cout << "Building Triangle" << std::endl;
            return new Triangle(points[0], points[1], points[2]);
        }
        else if (points.size() > 3) {
            std::cout << "Building Polyline" << std::endl;
            return new Polyline(points);
        }
    }
};
