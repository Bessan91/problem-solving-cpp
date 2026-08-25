v#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int min;
    int sec;

public:

    //====================================== Default Constructor
    Time()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }

    //======================================= Parameterized Constructor
    Time(int h, int m, int s)
    {
        hour = h;
        min = m;
        sec = s;
    }

    // Setters
    void setHour(int h)
    {
        hour = h;
    }

    void setMin(int m)
    {
        min = m;
    }

    void setSec(int s)
    {
        sec = s;
    }

    // Getters
    int getHour()
    {
        return hour;
    }

    int getMin()
    {
        return min;
    }

    int getSec()
    {
        return sec;
    }

    //========================================= Prefix ++
    Time& operator++()
    {
        sec++;

        if (sec == 60)
        {
            sec = 0;
            min++;
        }

        if (min == 60)
        {
            min = 0;
            hour++;
        }

        if (hour == 24)
        {
            hour = 0;
        }

        return *this;
    }

    // ==========================================Prefix --
    Time& operator--()
    {
        sec--;

        if (sec < 0)
        {
            sec = 59;
            min--;
        }

        if (min < 0)
        {
            min = 59;
            hour--;
        }

        if (hour < 0)
        {
            hour = 23;
        }

        return *this;
    }

    // << Operator
    friend ostream& operator<<(ostream& out, const Time& t)
    {
        out << t.hour << ":"
            << t.min << ":"
            << t.sec;

        return out;
    }
};


int main()
{
    Time t(0, 0, 0);

    --t;
    cout << t << endl;

    ++t;
    cout << t << endl;

    return 0;
}
