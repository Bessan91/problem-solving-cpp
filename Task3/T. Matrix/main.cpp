#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100][100];

    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];

            if (i == j)
                primary += arr[i][j];

            if (i + j == n - 1)
                secondary += arr[i][j];
        }
    }

    cout << abs(primary - secondary) << endl;

    return 0;
}
