#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<long> arr(5);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    long minSum = 0;
    long maxSum = 0;
    int count = 0;

    std::sort(arr.begin(),arr.end());
    
    for (int i = 0; i < arr.size(); i++)
    {
        if(i < 4)
        {
            minSum += arr[i];
        }
    }

    for (int i = 1; i < arr.size(); i++)
    {
        maxSum += arr[i];
    }

     cout << minSum << " " << maxSum << endl;

    return 0;
}   