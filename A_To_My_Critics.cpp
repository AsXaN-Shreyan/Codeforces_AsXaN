#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int a , b , c ;

    

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c ;

        int t1 = a + b ;
        int t2 = b + c ;
        int t3 = a + c ;

        if (t1 >= 10 || t2 >= 10 || t3 >= 10)
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