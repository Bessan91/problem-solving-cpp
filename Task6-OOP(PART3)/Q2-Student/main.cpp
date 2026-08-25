#include <iostream>
#include <string>
using namespace std;


// ================= AVG EXCEPTION =================

class AvgException
{
public:
    string message;

    AvgException(string m)
    {
        message = m;
    }
};


// ================= NAME EXCEPTION =================

class NameException
{
public:
    string message;

    NameException(string m)
    {
        message = m;
    }
};


// ================= STUDENT =================

class Student
{
private:
    int avg;
    string name;

public:

    // Default Constructor
    Student()
    {
        avg = 0;
        name = "";
    }

    // Parameterized Constructor
    Student(int a, string n)
    {
        if (a <= -1)
        {
            throw AvgException("Average cannot be <= -1");
        }

        if (n.length() > 15)
        {
            throw NameException(
                "Name length cannot be greater than 15"
            );
        }

        avg = a;
        name = n;
    }
};


// ================= MAIN =================

int main()
{
    try
    {
        Student s(20, "Bessan");

        cout << "Student created successfully!" << endl;
    }

    catch (AvgException e)
    {
        cout << e.message << endl;
    }

    catch (NameException e)
    {
        cout << e.message << endl;
    }

    return 0;
}
