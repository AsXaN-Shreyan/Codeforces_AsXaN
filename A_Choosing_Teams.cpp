#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k ;

    cin >> n >> k ; 

    vector<int> arr(n);

    int count = 0 ;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;

        if (arr[i]  <= (5- k) )
        {
            count++ ;
        }
        
    }

    int result = count / 3 ;

    cout << result << endl ;
    
    
    
    return 0;
}