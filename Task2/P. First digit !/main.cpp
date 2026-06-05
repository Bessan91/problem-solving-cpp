#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int firstDigit = num / 1000;

    if (firstDigit % 2 == 0) {
        cout << "EVEN";
    }
    else {
        cout << "ODD";
    }

    return 0;
}
