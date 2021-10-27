#ifndef SHAPES_COMPARE_H
#define SHAPES_COMPARE_H

#include<iostream>
#include<cmath>

class Shape
{
private:
    int Perimeter = 0;
    int Area = 0;

public:
    Shape() = default;
    Shape(const int &_p, const int &_a): Perimeter(_p), Area(_a){}
    virtual ~Shape() = 0;
    bool operator < (const Shape &s);
    bool operator > (const Shape &s);
    bool operator == (const Shape &s);
    void print()
    {
        std::cout << Perimeter << " " << Area << std::endl;

    }

};

class Circle : public Shape
{
public:
    ~Circle() = default;
    Circle(const int &radius):Shape((2 * radius * 3), std::pow(radius,2)){}
};

class Rectangle : public Shape
{
public:
    ~Rectangle() = default;
    Rectangle(const int &height, const int &width): Shape((2 * height) + (2 * width), (height * width)

}


#endif //SHAPE_COMPARE_H