#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {

    int s1 , s2 , s3 , s4 ;
    cin >> s1 >> s2 >> s3 >> s4 ;

    int winner1 = 0;
    int loser2 = 0 ;
    
    int winner2 = 0;
    int loser1 = 0 ;

    // First match

    if (s1 > s2)
    {
        winner1 = s1 ;
        loser1 = s2 ;
    }
    else
    {
        winner1 = s2 ;
        loser1 = s1 ;
    }

    // Second match

    if (s3 > s4)
    {
        winner2 = s3 ;
        loser2 = s4 ;
    }
    else
    {
        winner2 = s4 ;
        loser2 = s3 ;
    }

    //Verdict

    if (loser1 > winner2 || loser2 > winner1)
    {
        cout << "NO" << endl ;
    }
    else
    {
        cout << "YES" << endl ;
    }
    
}
    
    
    
    return 0;
}