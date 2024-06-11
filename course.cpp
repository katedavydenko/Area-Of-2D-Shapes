#include <iostream>
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Point.h"
#include "Shape.h" 
#include "Polygon.h" 
#include "Square.h" 
#include "Rhombus.h"
#include "Parallelogram.h" 
#include "Trapezoid.h" 
#include "Ellipse.h" 

int main(){
    Circle circle1 ({0, 0}, {4, 3});
    Circle circle2({ 0, 0 }, { 0, 3 }); 
    Ellipse ellipse1 ({0, 2}, {0, 0}, {0, 4});
    Ellipse ellipse2({ -2, 2 }, { 0, 0 }, { 4, 3 });
    Parallelogram parallelogram1 ({-4, 0}, {-2, 3}, {4, 3}, {2, 0});
    Parallelogram parallelogram2({ 3, 4 }, { 2, 7 }, { 6, 10 }, { 7, 7 });
    Parallelogram parallelogram3({ 3, 0 }, { 10, 5 }, { 12, 5 }, { 5, 0 });
    Polygon polygon1({ {1, 0}, {0.309, 0.951}, {-0.809, 0.588}, {-0.809, -0.588}, {0.309, -0.951} });
    Polygon polygon2({ {3, 4}, {5, 11}, {12, 8}, {9, 5}, {5, 6} });
    Polygon polygon3 ({ {0.72, 2.28}, {2.66, 4.71}, {5, 3.5}, {3.63, 2.52}, {4, 1.6}, {1.9, 1} });
    Rectangle rectangle1 ({4, 0}, {4, 3}, {9, 3}, {9, 0});
    Rectangle rectangle2({-8, 6 }, { -4, 10 }, { -2, 8 }, { -6, 4 });
    Rhombus rhombus1 ({-2, 0}, {0, 3}, {2, 0}, {0, -3});
    Rhombus rhombus2({ 0, 0 }, { -3, 1 }, { -4, 4 }, { -1, 3 });
    Square square1({ -2, 0 }, { -2, 2 }, { 0, 2 }, { 0, 0 });
    Square square2 ({0, 0 }, { -2, 2 }, { 0, 4 }, { 2, 2 });
    Trapezoid trapezoid1({ { -9, 0 }, { -8, 3 }, { -5, 3 }, { -4, 0 } });
    Trapezoid trapezoid2({ {0, 0}, {0, 3}, {2, 5}, {5, 5} });
    Triangle triangle1 ({ 0, 0 }, { 1, 3 }, { 4, 5.8 }); 
    Triangle triangle2({ 0, 0 }, { 0, 6 }, { 5, 0 }); 
    Triangle triangle3({ 0, 0 }, { 2, 3 }, { 4, 0 }); 

    cout << "Area of the circle1: " << circle1.area() << endl;
    cout << "Area of the circle2: " << circle2.area() << endl;
    cout << "Area of ellipse1: " << ellipse1.area() << endl;
    cout << "Area of ellipse2: " << ellipse2.area() << endl;    
    cout << "Area of the paralelogram1: " << parallelogram1.area() << endl;
    cout << "Area of the paralelogram2: " << parallelogram2.area() << endl;
    cout << "Area of the paralelogram3: " << parallelogram3.area() << endl;
    cout << "Area of the polygon1: " << polygon1.area() << endl;
    cout << "Area of the polygon2: " << polygon2.area() << endl;
    cout << "Area of the polygon3: " << polygon3.area() << endl;
    cout << "Area of the rectangle1: " << rectangle1.area() << endl;
    cout << "Area of the rectangle2: " << rectangle2.area() << endl;
    cout << "Area of rhombus1: " << rhombus1.area() << endl;
    cout << "Area of rhombus2: " << rhombus2.area() << endl;
    cout << "Area of square1: " << square1.area() << endl;
    cout << "Area of square2: " << square2.area() << endl;
    cout << "Area of the trapezoid1 is: " << trapezoid1.area() << endl;
    cout << "Area of the trapezoid2 is: " << trapezoid2.area() << endl;
    cout << "Area of the triangle1: " << triangle1.area() << endl;
    cout << "Area of the triangle2: " << triangle2.area() << endl;
    cout << "Area of the triangle3: " << triangle3.area() << endl;
}

