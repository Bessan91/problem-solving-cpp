#include <iostream>

using namespace std;

int main()
{
    cout << "TASK 1.1" << endl;
    cout << "Enter your name :" << endl;
    string name;
    cin >> name;

    cout << "Hello " << name << endl;
    cout << "Enter Two Number :" << endl;
    float num1, num2;
    cin >> num1>>num2;
    cout << "summation of "<<num1 << " + " <<num2 <<" is "<<(num1+num2)<< endl;
    cout << "subtraction of "<<num1 << " - " <<num2 <<" is "<<(num1-num2)<< endl;
    cout << "multiplication of "<<num1 << " * " <<num2 <<" is "<<(num1*num2)<< endl;
    cout << "Devision of "<<num1 << "/" <<num2 <<" is"<<(num1/num2)<< endl;

    cout<< " TASK 1.2"<< endl;

    char firstCharName;
    short birthMonth;
    short birthYear;
    cout << "Enter your first character : ";
    cin >> firstCharName;
    cout << "Enter your birth month : ";
    cin >> birthMonth;
    cout << "Enter your birth year : ";
    cin >> birthYear;
    cout << "His first character is " << firstCharName << endl;
    cout << "His birth month is " << birthMonth << endl;
    cout << "His birth year is " << birthYear << endl;
    return 0;
}

