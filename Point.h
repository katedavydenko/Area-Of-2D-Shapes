#ifndef POINT_H
#define POINT_H

struct Point {
    float x;
    float y;

    Point(float X = 0, float Y = 0) : x(X), y(Y) {}
};

#endif // POINT_H