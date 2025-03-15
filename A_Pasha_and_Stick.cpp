#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long n;
    cin >> n;

    if (n % 2 != 0) 

    {
        cout << 0 << endl;
        return 0;
    }

    long long m = n / 2;
    long long count = (m - 1) / 2;

    cout << count << endl;
    return 0;
}
