#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"
#include "Point.h"

class Triangle : private Shape {
public:
    Triangle() {}
    Triangle(Point a, Point b, Point c) {
        vertices[0] = a;
        vertices[1] = b;
        vertices[2] = c;
    }

    float area() {
        float ab = distance(vertices[0], vertices[1]);
        float bc = distance(vertices[1], vertices[2]);
        float ca = distance(vertices[2], vertices[0]);
        float s = (ab + bc + ca) / 2;
        return sqrt(s * (s - ab) * (s - bc) * (s - ca));
    }
    ~Triangle() {}

private:
    Point vertices[3];
};

#endif // TRIANGLE_H