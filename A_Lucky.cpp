#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    string shreyan ;

    string temp1 , temp2 ;
    

    for (int i = 0; i < t; i++)
    {
        cin >> shreyan ;

        temp1 = shreyan[0] + shreyan[1] + shreyan[2] ;

        temp2 = shreyan[3] + shreyan[4] + shreyan[5] ;

        if (temp1 == temp2)
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