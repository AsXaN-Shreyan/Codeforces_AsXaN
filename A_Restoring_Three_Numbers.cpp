#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i] ;

    }

    sort(arr , arr+4);

    int abc = arr[3] ;

    int a = abc - arr[2] ;

    int b = abc - arr[1] ;

    int c = abc - arr[0] ;

    cout << b << " " <<  a << " " <<  c << " " << endl ;
    
    
    
    return 0;
}