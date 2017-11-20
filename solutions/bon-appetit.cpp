#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int count;
    int allergy;
    cin >> count >> allergy;
    vector<int> meals(count);
    for(int i = 0; i < count; i++)
    {
       cin >> meals[i];
    }
    
    int bill;
    cin >> bill;

    int sumOfSharedItems = 0;

    for (size_t i = 0; i < meals.size(); i++)
    {
        sumOfSharedItems += meals[i];
        if (i == allergy)
        {
            sumOfSharedItems -= meals[i];
        }
    }    

    int actualBillPerPerson = sumOfSharedItems / 2;
    int change = bill - actualBillPerPerson;


    if (actualBillPerPerson == bill)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        cout << change << endl;
    }

    return 0;
}