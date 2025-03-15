#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k;
    cin >> n >> k ;

    int av_time = (240 - k) ;

    int time_spent = 0;
    
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        time_spent += i*5 ;

        if (time_spent > av_time)
    {
        break;
    }

    count++ ;

    }

    


    cout << count << endl ;
    
    
    
    return 0;
}