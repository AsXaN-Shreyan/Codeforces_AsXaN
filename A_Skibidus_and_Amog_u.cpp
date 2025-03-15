#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    string s ;

    while (t--)
    {
        cin >> s ;
        s.erase(s.size() - 2);

        cout << s << "i" << endl ;
    }
    
    
    
    return 0;
}