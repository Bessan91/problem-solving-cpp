#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[200];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 0;

    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cout << counter << endl;
                return 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] / 2;
        }

        counter++;
    }
}
