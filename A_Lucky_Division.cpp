#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int count = 0 ;


    int arr[12] = {4, 7, 44, 47, 74, 77, 444, 474, 477, 744, 747, 777};
    
    for (int i = 0; i < 12 ; i++)
    {
        if (n == arr[i])
        {
            count = 1 ;
        }
        else if (n % arr[i] == 0)
        {
            count = 1 ;
        }
        
        
    }

    if (count == 1)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    
    
    
    
    return 0;
}