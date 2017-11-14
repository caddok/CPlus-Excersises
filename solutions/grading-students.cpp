#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> grades(n);

    for (int i = 0; i < n; i++)
    {
        cin >> grades[i];
    }

    for (int i = 0; i < grades.size(); i++)
    {
        int rem = 0;
        int nextMultiple = 0;
        if(grades[i] >= 38)
        {
            rem = grades[i] % 5;
            nextMultiple = grades[i] + 5 - rem;
        }
        else
        {
            continue;
        }
        if (nextMultiple - grades[i] < 3)
        {
            grades[i] = nextMultiple;
        }
        
    }

    for (int i = 0; i < grades.size(); i++)
    {
        cout << grades[i] << endl;
    }

    return 0;
}