#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int d = 0 ;

    while (t--)
    {
        int n ;
        cin >> n ;

        string s ;
        cin >> s ;

        sort(s.begin() , s.end() );

        d = s[n-1]-'a';

        cout << (d+1) << endl ;
    }
    
    
    return 0;
}