#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    vector < int > a(n);

    for (int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }

    int mx = *max_element(a.begin() , a.end());
    int mn = *min_element(a.begin() , a.end());

    for (int i = 0; i < n; i++)
    {
        int count1 = INT_MAX ;
        int count2 = 0 ;
        if (i > 0) {
            count1 = min(count1, abs(a[i] - a[i - 1])); 
        }
        if (i < n - 1) {
            count1 = min(count1, abs(a[i] - a[i + 1])); 
        }

        
        count2 = max(count2, abs(a[i] - mn)); 
        count2 = max(count2, abs(a[i] - mx)); 

        cout << count1 << " " << count2 << endl;
        

        
        
        
        
    }
    
    
    
    
    return 0;
}