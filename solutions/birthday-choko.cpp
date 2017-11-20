#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int rows;
    cin >> rows;
    vector<int> chocolate(rows);
    for(int i = 0; i < rows; i++)
    {
       cin >> chocolate[i];
    }
    int day;
    int month;
    cin >> day >> month;

    int accumulated = 0;
    int sum = 0;
    int count = 0;
    int next = 0;

    for (size_t i = 0; i < chocolate.size(); i++)
    {
        sum += chocolate[i];
        accumulated++;
        for(int j = i+1 ; j < chocolate.size(); j++)
        {
            sum += chocolate[j];
            accumulated++;
            if (month == accumulated && day == sum)
            {
                count++;
            }

            if(month == accumulated && day != sum)
            {
                break;
            }
        }
        sum = 0;
        accumulated = 0;
    }

     cout << count << endl;

    return 0;
}