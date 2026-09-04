#include <iostream>
using namespace std;

class Vector
{
private:
    int* data;
    int size;
    int capacity;

public:
    Vector()
    {
        size = 0;
        capacity = 5;

        data = new int[capacity];
    }
    Vector(int c)
    {
        size = 0;
        capacity = c;

        data = new int[capacity];
    }

    // Copy Constructor
    Vector(const Vector& other)
    {
        size = other.size;
        capacity = other.capacity;

        data = new int[capacity];

        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
    }

    // Add
    void add(int value)
    {
        if (size == capacity)
        {
            cout << "Vector is full!" << endl;
            return;
        }

        data[size] = value;
        size++;
    }

    // Find
    int find(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if (data[i] == value)
            {
                return i;
            }
        }

        return -1;
    }

    // Remove From Index
    void removeFromIndex(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "Invalid index!" << endl;
            return;
        }

        for (int i = index; i < size - 1; i++)
        {
            data[i] = data[i + 1];
        }

        size--;
    }

    // Print
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << " ";
        }

        cout << endl;
    }

    // Destructor
    ~Vector()
    {
        delete[] data;
    }
};


int main()
{
    Vector v1;

    v1.add(10);
    v1.add(20);
    v1.add(30);
    v1.add(40);

    cout << "Vector: ";
    v1.print();


    //======================================== Find
    cout << "Index of 30: "
         << v1.find(30)
         << endl;


    //========================================= Remove
    v1.removeFromIndex(1);

    cout << "After removing index 1: ";
    v1.print();


    //====================================== Copy Constructor
    Vector v2 = v1;

    cout << "Copied Vector: ";
    v2.print();

    return 0;
}
