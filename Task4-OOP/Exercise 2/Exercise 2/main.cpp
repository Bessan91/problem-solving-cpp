#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int Id;
    string Name;
    double Marks[5];

public:

    Student(){};

    Student(int i, string n)
    {
        Id = i;
        Name = n;
        for (int i = 0; i < 5; i++)
            Marks[i] = 0;
    }

    // Setter & Getter Section
    void setId(int i)
    {
        Id = i;
    }

    int getId()
    {
        return Id;
    }

    void setName(string n)
    {
        Name = n;
    }

    string getName()
    {
        return Name;
    }

    // Read Marks
    void read_marks()
    {
        cout << "Enter 5 marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> Marks[i];
        }
    }

    // Calculate Average
    double calc_avg()
    {
        double sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += Marks[i];
        }

        return sum / 5;
    }

    // Print Information
    void printInfo()
    {
        cout << "\nStudent Information\n";
        cout << "ID : " << Id << endl;
        cout << "Name : " << Name << endl;
        cout << "Average : " << calc_avg() << endl;
    }
};

// Function to return student with maximum GPA
Student get_max(Student students[], int size)
{
    int maxIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (students[i].calc_avg() > students[maxIndex].calc_avg())
        {
            maxIndex = i;
        }
    }

    return students[maxIndex];
}

int main()
{
    Student students[3];

    for (int i = 0; i < 3; i++)
    {
        int id;
        string name;

        cout << "\nEnter Student " << i + 1 << " ID: ";
        cin >> id;

        cout << "Enter Student Name: ";
        cin >> name;

        students[i].setId(id);
        students[i].setName(name);
        students[i].read_marks();
    }

    Student Max_Stusent = get_max(students, 3);

    cout << "\nStudent with Maximum GPA:\n";
    Max_Stusent.printInfo();

    return 0;
}
