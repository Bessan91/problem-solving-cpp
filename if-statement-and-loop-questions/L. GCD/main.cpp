#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;

    int min_result = min(x, n);

    for (int i = min_result; i >= 1; i--)
    {
        if (x % i == 0 && n % i == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}
