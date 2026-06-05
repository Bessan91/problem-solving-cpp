#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

      long long fact = 1;

        for (int i = 1; i <= x; i++)
        {
            fact *= i;
        }

        cout << fact << endl;
    }

    return 0;
}
