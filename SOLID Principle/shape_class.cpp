#include <iostream>
#include <cmath>
#include <memory>

class Shape{
public:
    virtual double area() const = 0;

    //virtual double perimeter() = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape{
private:
    double length, breadth;

public:

    Rectangle(int l, int b) : length(l), breadth(b){};
    double area() const override
    {
        return length*breadth;
    }

    double perimeter() 
    {
        return 2*(length+breadth);
    }
};

class Circle : public Shape{
private:
    double radius;
public:
    Circle(int r) : radius(r){};

    double area() const override{

        return M_PI*radius*radius;
    }

    // double perimeter() override{

    //     return 2*M_PI*radius;
    // }

};

class AreaCalculator{
public:
    double calculate_area(Shape& shape)
    {
        return shape.area();
    }
};


int main()
{
    //Shape* rectangle = new Rectangle(10,5);
    Rectangle r(10,5);
    std::cout<<r.area();
    // std::unique_ptr <Shape> Rectangle = std::make_unique <Rectangle> (10,5);
    // std::unique_ptr <Shape> Circle = std::make_unique <Circle>(5);
    // //std::cout<<R1->AreaCalculator()<<std::endl;
    //double x = rectangle->Shape::area();
    // AreaCalculator ac;
    // std::cout<<ac.calculate_area(*rectangle);
    // Rectangle* rectptr = dynamic_cast<Rectangle*> (rectangle);

    // if(rectptr){
    //     std::cout<<"Perimeter "<<rectptr->perimeter();
    // }
    //rectangle->perimeter();
}
/*
1. The Compiler Only Knows the Pointer’s Type
In your code:

Shape* rectangle = new Rectangle(10, 5);
rectangle->perimeter();  // ❌ Compilation error
What the compiler knows:
rectangle is of type Shape*, so it only allows calls to functions declared in Shape.
What the compiler does NOT know at compile-time:
That rectangle actually points to a Rectangle object.
Since perimeter() is not declared in Shape, the compiler does not allow the call—even though the actual object at runtime has the function.

2. Why Doesn't the Compiler Automatically Look at the Derived Class?
C++ is a statically typed language, meaning function calls are resolved at compile-time (unless they are virtual).

The compiler sees rectangle->perimeter().
It looks at the type of rectangle, which is Shape*.
It checks if Shape has a function called perimeter().
Since Shape does NOT have perimeter(), the compilation fails.
Key Rule:
In C++, a pointer only provides access to the methods that are declared in its type—regardless of what object it points to.*/