#include <iostream>
using namespace std;


// ================= COMPUTER =================

class Computer
{
protected:
    int id;

public:

    // Default Constructor
    Computer()
    {
        id = 0;
    }

    // Parameterized Constructor
    Computer(int i)
    {
        id = i;
    }

    virtual void shortForm() = 0;

    virtual void famousFor() = 0;

    virtual ~Computer()
    {
    }
};


// ================= LAPTOP =================

class Laptop : public Computer
{
public:

    Laptop(int i) : Computer(i)
    {
    }

    void shortForm() override
    {
        cout << "Laptop is LP" << endl;
    }

    void famousFor() override
    {
        cout << "It is Famous for its Portability" << endl;
    }
};


// ================= DESKTOP =================

class Desktop : public Computer
{
public:

    Desktop(int i) : Computer(i)
    {
    }

    void shortForm() override
    {
        cout << "Desktop is DK" << endl;
    }

    void famousFor() override
    {
        cout << "It is famous for its Flexibility" << endl;
    }
};


// ================= SUPER COMPUTER =================

class SuperComputer : public Computer
{
public:

    SuperComputer(int i) : Computer(i)
    {
    }

    void shortForm() override
    {
        cout << "SuperComputer is SC" << endl;
    }

    void famousFor() override
    {
        cout << "It is Famous for its Speed" << endl;
    }
};


// ================= MAIN =================

int main()
{
    Computer* ptr;


    Laptop laptop(1);

    ptr = &laptop;

    ptr->shortForm();
    ptr->famousFor();

    cout << "---------------------" << endl;


    Desktop desktop(2);

    ptr = &desktop;

    ptr->shortForm();
    ptr->famousFor();

    cout << "---------------------" << endl;


    SuperComputer supercomputer(3);

    ptr = &supercomputer;

    ptr->shortForm();
    ptr->famousFor();


    return 0;
}
