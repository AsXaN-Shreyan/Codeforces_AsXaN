#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    string shreyan ;
    cin >> shreyan ;

    set<char> letters ;

    for ( char c : shreyan)
    {
        letters.insert(tolower(c));
    }

    if (letters.size() == 26)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    
    
     

    
    return 0;
}