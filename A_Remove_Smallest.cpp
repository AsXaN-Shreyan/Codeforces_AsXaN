#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t ;
   cin >> t ;

   while (t--)
   {
    int n ;
    cin >> n ;

    int arr[n] ;

    

    for (int i = 0; i < n ;i++)
    {
        cin >> arr[i];
        
    }

    sort(arr,arr+n);

    bool result = true ;

    for (int j = n-1; j > 0; j--)
    {
        if (arr[j] - arr[j-1] > 1)
        {
            result = false ;
            break ;
        }
        
    }
   
    if (result)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    
    
    


   }
    
    
    return 0;
}