#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(vector<int>&);
bool isLegit(vector<int>&, int, int);
bool isFactorOfAll(vector<int>&, int, int);
int main()
{
    int n;
    int m;
    cin >> n >> m;
    vector<int> firstSet(n);

    for(int i = 0; i < n; i++)
    {
       cin >> firstSet[i];
    }

    vector<int> secondSet(m);
    
    for(int i = 0; i < m; i++)
    {
       cin >> secondSet[i];
    }

    int firstMax = max(firstSet);
    int secondMax = max(secondSet);
    int absMax = 0;

    if (firstMax > secondMax)
    {
        absMax = firstMax;
    }
    else
    {
        absMax = secondMax;
    }

    int count = 0;

    for (int i = 1; i <= absMax; i++)
    {
        if (isLegit(firstSet,i,n) && isFactorOfAll(secondSet,i,m))
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
int max(vector<int> &set)
{
    int max = 0;
    for (size_t i = 0; i < set.size(); i++)
    {
        if (set[i] > max)
        {
            max = set[i];
        }
    }
    return max;
}
bool isLegit(vector<int> &set, int x, int size)
{
    bool legit = true;
    for (size_t i = 0; i < set.size(); i++)
    {
        if (x % set[i] != 0)
        {
            legit = false;
            break;
        }
    }
    return legit;
}
bool isFactorOfAll(vector<int> &set, int x, int size)
{
    bool legit = true;
    for (size_t i = 0; i < set.size(); i++)
    {
        if (set[i] % x != 0)
        {
            legit = false;
            break;
        }
    }
    return legit;
}