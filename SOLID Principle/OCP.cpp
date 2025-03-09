#include <iostream>
#include <vector>


/*Definition:
A class should be open for extension but closed for modification.

You should be able to add new functionality without changing the existing code.
This principle encourages designing your code in a way that adding features does not require modifying tested and existing code, which reduces the risk of introducing bugs.

*/
class Shape{
public:
    virtual double getArea() = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape{

public:
    double radius;
    Circle(int r) : radius(r){};
    double getArea() override
    {
        return 3.14*radius*radius;
    }
};

class Rectangle : public Shape{

public:
    double length , width;
    Rectangle(double l, double w) : length(l), width(w){};
    double getArea() override
    {
        return length*width;
    }
};

/*

This class violates Open/Closed Principle (OCP) As everytime we will add a new shape we will have to modify this class 

class AreaCalculator {
public:
    double CalculateTotalArea(const  std::vector <Shape*>& shapes)
    {
        double Area = 0;
        for(auto shape : shapes)
        {
            if(Circle* circle = dynamic_cast<Circle*>(shape))
            {
                Area+= 3.14*(circle->radius)*(circle->radius);
            }
            else if(Rectangle* rectangle = dynamic_cast<Rectangle*>(shape))
            {
                Area+= rectangle->length* rectangle->width;
            }
        }
        return Area;
    }
};*/

class AreaCalculator {
public:
    double CalculateTotalArea(const  std::vector <Shape*>& shapes)
    {
        double Area = 0;
        for(const auto& shape : shapes)
        {
            Area+=shape->getArea();
        }
        return Area;
    }
};

int main()
{
    std::vector <Shape*> shapes = {new Circle(5), new Rectangle(10,5)};
    AreaCalculator Ac;
    double ToatlArea = Ac.CalculateTotalArea(shapes);
    std::cout<<ToatlArea;
    for(auto shape : shapes) delete shape;
}