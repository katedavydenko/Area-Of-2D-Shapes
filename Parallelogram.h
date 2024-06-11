#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include "Shape.h"
#include "Point.h"

class Parallelogram : private Shape {
public:
    Parallelogram() {}
    Parallelogram(Point a, Point b, Point c, Point d) {
        vertices[0] = a;
        vertices[1] = b;
        vertices[2] = c;
        vertices[3] = d;
    }
    float area() {

        float crossProduct = 0;
        float ABx = vertices[1].x - vertices[0].x;
        float ABy = vertices[1].y - vertices[0].y;
        float ACx = vertices[2].x - vertices[0].x;
        float ACy = vertices[2].y - vertices[0].y;

        crossProduct = ABx * ACy - ABy * ACx;
        return abs(crossProduct);
    }
    ~Parallelogram() {}

private:
    Point vertices[4];
};

#endif // PARALLELOGRAM_H