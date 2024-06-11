#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "Point.h"

class Circle : private Shape {
public:
    Circle() {}
    Circle(Point a, Point b) {
        vertices[0] = a;
        vertices[1] = b;
    }

    float area() { 
        float radius = distance(vertices[0], vertices[1]);
        return M_PI * radius * radius;
    }
    ~Circle() {}

private:
    Point vertices[2];
};

#endif // CIRCLE_H
