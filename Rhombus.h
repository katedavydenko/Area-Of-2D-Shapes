#ifndef RHOMBUS_H
#define RHOMBUS_H
#include "Shape.h"
#include "Point.h"

class Rhombus : private Shape {
public:
    Rhombus() {}
    Rhombus(Point a, Point b, Point c, Point d) {
        vertices[0] = a;
        vertices[1] = b;
        vertices[2] = c;
        vertices[3] = d;
    }

    float area() {
        float diagonal1 = distance(vertices[2], vertices[0]);
        float diagonal2 = distance(vertices[3], vertices[1]);
        return 0.5 * diagonal1 * diagonal2;
    }
    ~Rhombus() {}

private:
    Point vertices[4];
};

#endif // RHOMBUS_H
