#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = *max_element(a.begin() , a.end());
    int mn = *min_element(a.begin() , a.end());

    int count1 = 0 ;
    int count2 = 0 ;

    if (mx == mn)
    {
        cout  << 0 << endl ;
    }
    else
    {
        for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            count1++;
        }
        
        if (a[i] == mn)
        {
            count2++ ;
        }
        
    }
    cout << (n- (count1 + count2)) << endl;
    }
    
    

    //cout << count1 << " " <<  count2 << endl ;

    
    
    
    
    
    return 0;
}