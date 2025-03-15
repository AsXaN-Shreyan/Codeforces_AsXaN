#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x , y ;

    cin >> x >> y ;

    int dif_socks = min(x , y);

    int max_days = max((x - min(x,y))/2
                        ,(y-min(x,y))/2);

    cout << dif_socks << " " << max_days << endl ;
    
    return 0;
}