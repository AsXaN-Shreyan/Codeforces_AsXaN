#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k , r ;

    cin >> k >> r ;

    int count = 0 ;

    int result = 0 ;

    for (int i = 1 ; i <= 10; i++)
    {

        

        count = ((k*i));

        if (count % 10 == 0 || count%10 == r)
        {
            cout << i << endl ;
            return 0;
        }

        
        
    }


    cout << "10" << endl ;
    
    return 0;
}