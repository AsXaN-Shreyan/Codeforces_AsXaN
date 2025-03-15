#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int arr[t] ;

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i] ;
    }

    int count = 1  ;
    int max1 = 1 ;

    for (int i = 1; i < t; i++) 
    {
       
            if (arr[i] > arr[i-1])
            {
                count++;
            }
            else
            {
              max1 = max(max1, count);
              count = 1;  
            }
            
   
    }

    max1 = max(max1, count);

    cout << max1 << endl ;
    

    
    
    
    
    return 0;
}