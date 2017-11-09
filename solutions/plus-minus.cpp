#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    float positiveCount = 0;
    float negativeCount = 0;
    float zeroCount = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            positiveCount++;
        }
        else if (arr[i] < 0)
        {
            negativeCount++;
        }
        else
        {
            zeroCount++;
        }
    }

    std::cout << fixed <<std::setprecision(6) << (positiveCount/arr.size()) << '\n';
    std::cout << (negativeCount/arr.size()) << '\n';
    std::cout << (zeroCount/arr.size()) << '\n';
    return 0;
}