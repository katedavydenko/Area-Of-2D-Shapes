#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
#include "Point.h"

class Square : private Shape {
public:
    Square() {}
    Square(Point a, Point b, Point c, Point d) {
        vertices[0] = a;
        vertices[1] = b;
    }

    float area() {
        return pow(distance(vertices[0], vertices[1]), 2);
    }
    ~Square() {}

private:
    Point vertices[4];
};

#endif // SQUARE_H