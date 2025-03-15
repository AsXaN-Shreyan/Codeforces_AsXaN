#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    int a , b , c ;
    cin >> t ;

    while(t--)
    {
       cin >> a >> b >> c ; 

       int sum = (a+ b + c);

       if (a > b)
       {
        cout << "First" << endl ;
       }
       else if (b > a)
       {
        cout << "Second" << endl ;  
       }
       else
       {
        if (c % 2 == 0 || c == 2)
        {
            cout << "Second" << endl ;
        }
        else
        {
            cout << "First" << endl ;
        }
        
        
       }
       
       
       
       
       
    }
    
    
    return 0;
}