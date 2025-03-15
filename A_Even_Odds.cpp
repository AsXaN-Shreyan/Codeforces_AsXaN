#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k ;
    cin >> n >> k ;

    int count = 0;
    
   
    if (k <= (n+1)/2)
    {
        count = (k*2) -1 ;  
    }
    else
    {
        count = (k - (n+1)/2) * 2;

    }

    cout << count << endl ;
     
    
       
   
   
    
    return 0;
}