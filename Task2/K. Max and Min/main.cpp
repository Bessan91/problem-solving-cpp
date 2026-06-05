#include <iostream>

using namespace std;

int main()
{

    int A, B, C;
    cin >> A >> B >> C;

    int min_value = min(A, min(B, C));
    int max_value = max(A, max(B, C));

    cout <<  min_value << " " <<max_value;

    return 0;
}

// Solved
