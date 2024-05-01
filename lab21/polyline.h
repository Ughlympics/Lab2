#pragma once 
#include <iostream>
#include <vector>
#include <string>
#include "point.h"





class Polyline
{
protected:
    std::vector<Point> _points;
public:
    Polyline(std::vector<Point> points);

    virtual void chozer() {};
};

