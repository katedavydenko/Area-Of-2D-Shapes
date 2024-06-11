#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Shape.h"
#include "Point.h"

class Ellipse : private Shape {
public:
    Ellipse() {}
    Ellipse(Point a, Point b, Point c) {
        vertices[0] = a;
        vertices[1] = b;
        vertices[2] = c;
    }

    float area() {
        
        float radius1 = distance(vertices[0], vertices[1]);
        float radius2 = distance(vertices[1], vertices[2]);
        return M_PI * radius1 * radius2;
    }
    ~Ellipse() {}

private:
    Point vertices[3];
};

#endif // ELLIPSE_H