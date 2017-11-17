#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int games;
    cin >> games;
    vector<int> scores(games);
    for(int i = 0; i < games; i++)
    {
       cin >> scores[i];
    }

    int bestScore = scores[0];
    int worseScore = scores[0];

    int upgrade = 0;
    int degrade = 0;

    for (size_t i = 1; i < scores.size(); i++)
    {
        if (scores[i] > bestScore)
        {
            bestScore = scores[i];
            upgrade++;
        }
        else if (scores[i] < worseScore)
        {
            worseScore = scores[i];
            degrade++;
        }
    }

    cout << upgrade << " " << degrade << endl;

    return 0;
}