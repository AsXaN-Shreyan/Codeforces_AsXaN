#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    int a , b ;
    int count = 0 ;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b ;

        int max_a = max(2*a , b);
        int max_b = max(2*b , a);

        count = (min(max_a , max_b))*(min(max_a , max_b));

        cout << count << endl ;


    }
    
    
    return 0;
}