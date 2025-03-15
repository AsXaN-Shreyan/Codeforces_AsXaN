#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , d ;
    cin >> n >> d ;

    int a[n];

    int ans = 0 ;

    for (int i = 0; i < n; i++)
    {
        if(i && a[i-1]+d<a[i]-d){
            ans++;
        }
        if(i<n-1 && a[i]+d<=a[i+1]-d){
            ans++;
        }
    }

    cout << ans << endl ;
 

    
    return 0;
}