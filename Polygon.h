#ifndef POLYGON_H
#define POLYGON_H
#include "Shape.h"
#include "Point.h"

class Polygon : private Shape {
public:
    Polygon() {}
    Polygon(vector<Point> vertices1) : vertices(vertices1) {}

    float area() {
        float area = 0.0f;
        int n = vertices.size();

        for (int i = 0; i < n; i++) {
            int j = (i + 1) % n;  
            area += vertices[i].x * vertices[j].y - vertices[i].y * vertices[j].x;
        }
        return abs(area) / 2.0f;
    }
    ~Polygon() {}

private:
    vector<Point> vertices;
};

#endif // POLYGON_H
