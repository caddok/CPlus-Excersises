#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isJulLeapYear(int);
bool isGregLeapYear(int);
int main()
{
    int year;
    cin >> year;

    if (year >= 1700 && year <= 1917 && isJulLeapYear(year) == false)
    {
        cout << "13.09." << year << endl;
    }
    else if(year >= 1700 && year <= 1917 && isJulLeapYear(year) == true)
    {
        cout << "12.09." << year << endl;
    }

    if (year == 1918)
    {
        cout << "26.09." << year << endl;
    }

    if (year >= 1919 && year <= 2700 && isGregLeapYear(year) == false)
    {
        cout << "13.09." << year << endl;
    }
    else if(year >= 1919 && year <= 2700 && isGregLeapYear(year) == true)
    {
        cout << "12.09." << year << endl;
    }

    return 0;
}
bool isJulLeapYear(int year)
{
    bool isLeap = false;
    if (year % 4 == 0)
    {
        isLeap = true;
    }
    return isLeap;
}
bool isGregLeapYear(int year)
{
    bool isLeap = false;
    if (year % 400 == 0)
    {
        isLeap = true;
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        isLeap = true;
    }
    return isLeap;
}