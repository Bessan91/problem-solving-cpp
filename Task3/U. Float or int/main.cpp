#include <iostream>
using namespace std;

int main()
{
    double n;
    cin >> n;

    long long secandPart = n;

    if (n == secandPart)
    {
        cout << "int " << secandPart << endl;
    }
    else
    {
        cout << "float " << secandPart << " " << n - secandPart << endl;
    }
    return 0;
}
