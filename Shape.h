#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"
#include <cmath>
#include <algorithm>
#include <vector>
constexpr float M_PI = 3.14159265358979323846;

using namespace std;

class Shape {
public:
    Shape() {}
    
    ~Shape() {}

protected:
    float distance(Point p1, Point p2) {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    };

private:
    virtual float area() = 0;
};

#endif // SHAPE_H
