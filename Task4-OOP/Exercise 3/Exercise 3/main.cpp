#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:


    Point(){};

    Point(int xValue, int yValue)
    {
        x = xValue;
        y = yValue;
    }

    //--------------------- Setters------------------------
    void setX(int xValue)
    {
        x = xValue;
    }

    void setY(int yValue)
    {
        y = yValue;
    }

    //------------------- Getters-----------------------------
    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};



class Circle
{
private:

    Point Center;
    double Radius;

public:

    Circle(){}

    Circle(Point c, double r)
    {
        Center = c;
        Radius = r;
    }


    // Setters
    void setCenter(Point c)
    {
        Center = c;
    }

    void setRadius(double r)
    {
        Radius = r;
    }


    // Getters
    Point getCenter()
    {
        return Center;
    }

    double getRadius()
    {
        return Radius;
    }
    //===================================================
    double calcArea()
    {
        return 3.14 * Radius * Radius;
    }
};



int main()
{
    Point p1(2,4);

    Circle circle1(p1, 5);

    // Copy circle1 into circle2
    Circle circle2 = circle1;


    cout << "Circle 2 Area = "
         << circle2.calcArea()
         << endl;


    return 0;
}
