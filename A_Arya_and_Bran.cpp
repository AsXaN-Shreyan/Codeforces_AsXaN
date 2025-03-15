#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k ;
    cin >> n >> k ;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0 ;

    int candy = 0 ;

    int left = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 8 )
        {
            count++;
        }
        else if (a[i] > 8)
        {

            count++ ;

            left = a[i] - 8;

            candy += left ;

c
            
        }
        
        
    }


    cout << count << endl ;
    
    
    return 0;
}