#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n , m, a;

    cin >> n >> m >> a ;

    long long int count = 0 ;

    count = ((m+a-1)/a)* ((n+a-1)/a);

    cout << count << endl;
    
    
    return 0;
}