#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int birds;
    cin >> birds;
    vector<int> flock(birds);
    for(int i = 0; i < birds; i++)
    {
       cin >> flock[i];
    }

    int oneCount = 0;
    int twoCount = 0;
    int threeCount = 0;
    int fourCount = 0;
    int fiveCount = 0;

    for (size_t i = 0; i < flock.size(); i++)
    {
        switch (flock[i])
        {
            case 1:
            oneCount++;
            break;
            case 2:
            twoCount++;
            break;
            case 3:
            threeCount++;
            break;
            case 4:
            fourCount++;
            break;
            case 5:
            fiveCount++;
            default:
            break;
        }
    }

    int categories [5] = {oneCount, twoCount, threeCount, fourCount, fiveCount};
    int category = 0;

    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        int tempCat = 0;
        int tempMax = 0;
        for(auto value : categories)
        {
            if (categories[i] > value)
            {
                tempMax = categories[i];
                tempCat = i;
            }
        }
        if (tempMax > max)
        {
            max = tempMax;
            category = tempCat;
        }
        if (tempMax == max && tempCat < category)
        {
            category = tempCat;
        }
    }

    cout << category + 1  << endl;

    return 0;
}