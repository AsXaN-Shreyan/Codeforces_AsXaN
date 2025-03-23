#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k ;
    cin >> n >> k ;

    string gift ;
    cin >> gift ;

    // set<char> s ;

    map<char , int > ballon ;

    for (int i = 0; i < n; i++)
    {
        // char fuck ;
        // cin >> fuck ;
        // s.insert(fuck) ;

        ballon[gift[i]]++ ;
    }

    // if (s.size() == k)
    // {
    //     cout << "YES" << endl ;
    // }
    // else
    // {
    //     cout << "NO" << endl ;
    // }
    

    for (int i = 0; i < n ; i++)
    {
        if (ballon[gift[i]] > k)
        {
            cout << "NO" << endl ;
            return 0 ;
        }
        
    }

    cout << "YES" << endl ;
    
    
    

    
    
    return 0;
}