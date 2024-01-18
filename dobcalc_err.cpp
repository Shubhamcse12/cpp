#include <iostream>
using namespace std;

class datetime
{

public:
    int date, month, year;
    datetime(int d, int m, int y)
    {
        date = d;
        month = m;
        year = y;
    }

    datetime operator-(datetime dob)
    {
        int ageyear = year - dob.year;
        int agemonth, agedate;
        if (month < dob.month)
        {
            ageyear--;
            agemonth = 12 - (dob.month - month);
        }

        else
        {
            agemonth = month - dob.month;
        }

        if (date < dob.date)
        {
            agemonth--;
            agedate = 30 - (dob.date - date);
        }

        else
        {
            agedate = date - dob.date;
        }

        return datetime(agedate, agemonth, ageyear);
    }

    void getage()
    {
        cout << "age is " << year << " years " << month << " months " << date << " days ";
    }
};

int main()
{

    datetime today(16, 1, 2024), dob(16, 6, 2003);
    datetime age = today - dob;
    age.getage();
    return 0;
}