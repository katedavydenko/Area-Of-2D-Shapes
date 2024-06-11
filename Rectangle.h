#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include "Point.h"

class Rectangle : private Shape {
public:
    Rectangle() {}
    Rectangle(Point a, Point b, Point c, Point d) {
        vertices[0] = a;
        vertices[1] = b;
        vertices[2] = c;
        vertices[3] = d;
    }
    
    float area() {
        float width = distance(vertices[0], vertices[1]);
        float height = distance(vertices[1], vertices[2]);
        return width * height;
    }
    ~Rectangle() {}

private:
    Point vertices[4];
};

#endif // RECTANGLE_H
