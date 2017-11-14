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
    vector<int> ar(n);
    for (int i = 0; i < ar.size(); i++)
    {
        cin >> ar[i];
    }

    int candles = 0;
    int maxHeigth = 0;
    for(auto candle : ar)
    {
        if (candle > maxHeigth)
        {
            maxHeigth = candle;
            candles = 1;
        }
        else if (candle == maxHeigth)
        {
            candles++;
        }        
    }

    cout << candles << endl;
    return 0;
}