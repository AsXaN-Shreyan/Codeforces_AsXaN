#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int x , y , z ;

    int countX = 0 ;
    int countY = 0 ;
    int countZ = 0 ;

     

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> z ;
       
        
        countX += x ;
        countY += y ;
        countZ += z ;
    }
    
    //cout << countX << " " << countY << " " << countZ << endl ;

    if  (countX == 0 &&  countY == 0 && countZ == 0 )
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    
    
    
    
    return 0;
}