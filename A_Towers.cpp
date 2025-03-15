#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , cnt[1008] = {0} , maximus = 0 ;
    cin >> n ;

    set < int > a ;
    
    for (int i = 0; i < n; i++)
    {
        int x ;
        cin >> x  ;

        cnt[x]++ ;

        maximus = max(maximus , cnt[x]);

        a.insert(x);
    }

    cout << maximus <<" " << a.size() << endl ;
    
    
    
    return 0;
}