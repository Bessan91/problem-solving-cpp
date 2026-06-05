#include <iostream>
using namespace std;

int main()
{
    char S;
    int N;

    cin >> S;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;

        for (int j = 0; j < x; j++)
        {
            cout << S;
        }

        cout << endl;
    }

    return 0;
}
