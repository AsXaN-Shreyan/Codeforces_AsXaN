#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    int n ;
    int count = 0 ;
    int count2 = 0 ;

    for (int i = 0; i < t ;i++)
    {
        cin >> n ;

        count = n / 3 ;

        count2 = n % 3 ;




        if (count2 == 0)
        {
            cout << count << " " << count << endl ;
        }
        else if (count2 == 2)
        {
            cout << count << " " << count+1 << endl ;
        }
        else if (count2 == 1)
        {
            cout << count+1 << " " << count << endl ;
        }
        
        
        


    }
    
    
    return 0;
}