#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;  

    int count = 0 ;
    
    while (t--) {
        int n;
        cin >> n;  
        
        
        count = n / 2;

        if (n % 2 != 0 || n == 1)
        {
            count = count + 1 ;
        }
        else
        {
            count = count ;
        }
        
        cout << count << endl ;
    }
    
    
    
    return 0;
}