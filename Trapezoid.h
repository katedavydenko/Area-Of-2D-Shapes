#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Shape.h"
#include "Point.h"

class Trapezoid : private Shape, private Polygon {
public:
    Trapezoid() {}
    Trapezoid(vector<Point> vertices1) : Polygon(vertices1){};

    float area() {
        return Polygon::area();
    }
    ~Trapezoid() {}

private:
    vector<Point> vertices;
};

#endif // TRAPEZOID_H
