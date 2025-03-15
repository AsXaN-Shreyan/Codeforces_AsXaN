#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int a , b , c , n ;

    int count = 0 ;

    while(t--)
    {
        cin >> a >> b >> c >> n ;
        
        count = a+b+c+n ;

        if (count % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (a > count/3 || b > count/3 ||c > count/3 )
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            
            
        }
        
        
    }
    

    
    return 0;
}