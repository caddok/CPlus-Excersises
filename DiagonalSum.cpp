#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; i++)
        {
            cin >> a[i][j];
        }
    }

    int primeDiagonal = 0;
    int secondDiagonal = 0;

    for (int i = 0; i < a.size(); i++)
    {
        int secondDiagonalNum = n-i;
        primeDiagonal= primeDiagonal + a[i][i];
        secondDiagonal = secondDiagonal + a[i][secondDiagonalNum];
    }

    int result = abs(primeDiagonal-secondDiagonal);

    std::cout << result << '\n';
    return 0;
}