#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nums;
    int divider;
    cin >> nums >> divider;

    vector<int> ar(nums);
    for(int i = 0; i < nums; i++)
    {
       cin >> ar[i];
    }

    for (int i = 0; i < ar.size(); i++)
    {
        for (int j = 0; j < ar.size() - 1; j++)
        {
            if(ar[j] > ar[j+1])
            {
                int save = 0;
                save = ar[j+1];
                ar[j+1] = ar[j];
                ar[j] = save;
            }
        }
    }

    int count = 0;

    for (size_t i = 0; i < ar.size(); i++)
    {
        for(auto value : ar)
        {
            if (ar[i] < value && (ar[i] + value) % divider == 0)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}