#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int n , H , M , alarm , ans  ;


    while(t--)
    {
    int n;

    cin >> n;

    int alarm, h, m;

    cin >> h >> m;

    alarm = 60 * h + m;

    int day = 24 * 60;

    for(int i = 0; i < n; ++i)

    {
        cin >> h >> m;

        int clock = 60 * h + m - alarm;
        if(clock < 0)
        {
         clock += 24 * 60;
        }

        day = min(day, clock);
    }

    cout << day / 60 << " " << day % 60 << endl ;

    }

    return 0;
}
        
