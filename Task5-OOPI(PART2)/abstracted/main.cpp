#include <iostream>
using namespace std;


// ================= MOVABLE =================

class Movable
{
public:

    virtual void moveUp() = 0;

    virtual void moveDown() = 0;

    virtual void moveLeft() = 0;

    virtual void moveRight() = 0;
};


// ================= MOVABLE POINT =================

class MovablePoint : public Movable
{
private:
    int x;
    int y;
    int xSpeed;
    int ySpeed;

public:

    // Default Constructor
    MovablePoint()
    {
        x = 0;
        y = 0;
        xSpeed = 0;
        ySpeed = 0;
    }

    // Parameterized Constructor
    MovablePoint(int x, int y, int xSpeed, int ySpeed)
    {
        this->x = x;
        this->y = y;
        this->xSpeed = xSpeed;
        this->ySpeed = ySpeed;
    }

    // Move Up
    void moveUp()
    {
        y += ySpeed;
    }

    // Move Down
    void moveDown()
    {
        y -= ySpeed;
    }

    // Move Left
    void moveLeft()
    {
        x -= xSpeed;
    }

    // Move Right
    void moveRight()
    {
        x += xSpeed;
    }

    // Display METHOD
    void display_info()
    {
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
        cout << "X Speed = " << xSpeed << endl;
        cout << "Y Speed = " << ySpeed << endl;
    }
};


// ================= MAIN CLASS =================

int main()
{
    MovablePoint m(5, 5, 2, 3);

    m.moveUp();

    // x = 5
    // y = 8

    m.moveLeft();

    // x = 3
    // y = 8

    m.display_info();

    return 0;
}
