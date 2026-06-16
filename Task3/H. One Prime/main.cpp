#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    bool isPrime = true;

    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
