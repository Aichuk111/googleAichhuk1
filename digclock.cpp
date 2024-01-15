// 0-11 am--------------12-24 pm***********

#include <iostream>
#include <iomanip>
using namespace std;
class Digitalc
{
private:
    int hours, minutes, seconds;

public:
    Digitalc(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display_time()
    {
        if (hours < 10)

            cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << " ";
        else if (minutes < 10)

            cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << " ";

        else if (seconds < 10)

            cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << " ";

        if (hours >= 12)

            cout << "pm \n";
        else
            cout << "am \n";
    }
};
int main()
{
    int hours, minutes, seconds;
    cout << "Enter hours: \n";
    cin >> hours;
    cout << "Enter minutes :\n";
    cin >> minutes;
    cout << "Enter seconds : \n";
    cin >> seconds;
    Digitalc clock(hours, minutes, seconds);
    clock.display_time();
    return 0;
}