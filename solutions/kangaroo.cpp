#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int kangaStart1;
    int speed1;
    int kangaStart2;
    int speed2;
    cin >> kangaStart1 >> speed1 >> kangaStart2 >> speed2;

    int count = 0;

    while (kangaStart1 != kangaStart2)
    {
        kangaStart1 += speed1;
        kangaStart2 += speed2;
        if (kangaStart1 == kangaStart2)
        {
            cout << "YES" << endl;
            break;
        }
        count++;
        if (count == 10000 && kangaStart1 != kangaStart2)
        {
            cout << "NO" << endl;
            break;
        }
    }
    if (kangaStart1 == kangaStart2 && speed1 == speed2)
    {
        cout << "YES" << endl;
    }

    return 0;
}