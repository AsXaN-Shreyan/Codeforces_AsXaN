#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x , y , z ;

    cin >> x >> y >> z ;

    string o = x + y ;

    // set<char> r ;
    // set< char > a ;

    // for (int i = 0; i < o.size(); i++)
    // {
    //     int c1 ;
    //     cin >> c1 ;
    //     r.insert(c1);
    // }

    // for (int i = 0; i < z.size(); i++)
    // {
    //     int c2 ;
    //     cin >> c2 ;
    //     a.insert(c2); 
    // }

    // cout << r.size() << " " << a.size() << endl ;

    sort(z.begin() , z.end());
    sort(o.begin() , o.end());

    //if (r.size() == a.size())

    if (o == z)
    // {
    //     /* code */
    // }
    
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    
    
    
    return 0;
}