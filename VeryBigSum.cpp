#include <iostream>
#include <vector>
using namespace std;

long VeryBigSum(int n,vector<long> ar){
    long sum = 0;
    for(int i = 0; i < n ;i++){
        long num = ar[i];
        sum+=num;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector <long> ar(n);
    for(int i = 0;i<n;i++)
    {
        cin >> ar[i];
    }
    long result = VeryBigSum(n,ar);

    cout << result << endl;
}