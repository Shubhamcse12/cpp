#include <iostream>

class DateTime
{
public:
    int date, month, year;

    DateTime(int d, int m, int y)
    {
        date = d;
        month = m;
        year = y;
    }

    DateTime operator-(const DateTime &dob) const
    {
        DateTime ageDifference(0, 0, 0);

        if (date < dob.date)
        {
            int borrow = (dob.date - date) / 30 + 1;
            ageDifference.date = date + 30 - dob.date;
            ageDifference.month = month - borrow;
        }
        else
        {
            ageDifference.date = date - dob.date;
            ageDifference.month = month;
        }

        if (month < dob.month)
        {
            int borrow = (dob.month - month) / 12 + 1;
            ageDifference.month = month + 12 - dob.month;
            ageDifference.year = year - borrow;
        }
        else
        {
            ageDifference.month = month - dob.month;
            ageDifference.year = year;
        }

        ageDifference.year -= dob.year;

        return ageDifference;
    }

    void getAge() const
    {
        std::cout << "Age is " << year << " years, " << month << " months, " << date << " days" << std::endl;
    }
};

int main()
{
    DateTime today(18, 1, 2024), dob(16, 6, 2003);
    DateTime age = today - dob;
    age.getAge();
    return 0;
}
