#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int houseBegin,houseEnd;
    cin >> houseBegin >> houseEnd;
    int appleTree,orangeTree;
    cin >> appleTree >> orangeTree;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);

    for(int apple_i = 0;apple_i < m;apple_i++)
    {
       cin >> apple[apple_i];
    }
    int appleCount = 0;

    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++)
    {
       cin >> orange[orange_i];
    }
    int orangeCount = 0;

    for (int i = 0; i < apple.size(); i++)
    {
        if ((appleTree + apple[i]) >= houseBegin && (appleTree + apple[i]) <= houseEnd)
        {
            appleCount++;
        }
    }


    for (int i = 0; i < orange.size(); i++)
    {
        if ((orangeTree + orange[i]) >= houseBegin && (orangeTree + orange[i]) <= houseEnd)
        {
            orangeCount++;
        }
    }

    cout << appleCount << endl;
    cout << orangeCount << endl;

    return 0;
}