#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char comp;

    cin >> num1 >> comp >> num2;

    if (comp == '>') {
        if (num1 > num2)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }

    else if (comp == '<') {
        if (num1 < num2)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }

    else if (comp == '=') {
        if (num1 == num2)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }

    return 0;
}

// Solved
