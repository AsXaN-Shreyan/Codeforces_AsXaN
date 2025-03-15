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

        int count = 0 ;

        if ((a>b && a<c) || (a<b && a>c) )
        {
            count = a ; 
        }
        else if ((b>a && b<c) || (b<a && b>c))
        {
            count = b ;
        }
        else
        {
            count = c ;
        }
        
        cout << count << endl ;
        

    }
    
    
    return 0;
}