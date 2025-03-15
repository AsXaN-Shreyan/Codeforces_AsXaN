#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int a , b , c ;

        cin >> a >> b >> c ;

        int mn = min(a  , min(b , c));

        int count1 = a / mn ;
        int count2 = b / mn ;
        int count3 = c / mn ;

        if (a % mn == 0 && b % mn == 0 && c % mn == 0 )
        {
            if (count1 + count2 + count3 <= 6)
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ;
            }
            
            
        }
        else
        {
            cout << "NO" << endl ;
        }
        
        
    }
    
    
    
    return 0;
}