#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int years = N / 365;
    N = N % 365;

    int months = N / 30;
    N = N % 30;

    int days = N;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
