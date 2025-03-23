#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >>  n ;

    vector<int> day(7);

    for (int i = 0; i < 7; i++)
    {
        cin >> day[i] ;
    }

    int com= 0 ;
    
    int xox = 0 ;

    while(true)
    {

        for (int i = 0; i < 7; i++)
        {
            com += day[i];

            if (com >= n )
            {
                cout << i+1 ;
                return 0;
            }
            
        }
        
    }
    
    
    return 0;
}