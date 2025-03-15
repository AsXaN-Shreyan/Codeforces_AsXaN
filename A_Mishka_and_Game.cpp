#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int countM = 0 ;
    int countC = 0 ;

    while (t--)
    {
        int m , c ;
        cin >> m >> c ;

        

        if (m > c)
        {
            countM++ ;
        }
        else if (c > m)
        {
            countC++ ;
        }
        
        
    }

    if (countM > countC)
    {
        cout << "Mishka" << endl ;
    }
    else if (countC > countM)
    {
        cout << "Chris" << endl ;
    }
    else if (countC == countM)
    {
        cout << "Friendship is magic!^^" << endl ;
    }
    
    
    
    
    
    return 0;
}