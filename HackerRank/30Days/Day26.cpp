#include <iostream>
using namespace std;

int main()
{
    
    int reday, remonth, reyear;
    cin >> reday >> remonth >> reyear;
    int dday, dmonth, dyear, day, month, year;
    cin >> dday >> dmonth >> dyear;
    day = reday - dday;
    month = remonth - dmonth;
   // year = reyear - dyear;

    if (dyear == reyear)
    {
        if (dmonth == remonth)
        {
            if (dday == reday)
            {
                cout << "0" << endl;
            }
            else
            {
                if (reday > dday)
                {
                    cout << 15 * day << endl;
                }
                else
                    cout << "0" << endl;
            }
        }
        else{
            if (remonth > dmonth)
            {
                cout << 500 * month << endl;
            }
            else
            cout << "0" << endl;
        }
    }
    else
    {
        if(reyear > dyear)
        {
            cout << "10000" << endl;
        }
        else
        cout << "0" << endl;
    }


    return 0;
}