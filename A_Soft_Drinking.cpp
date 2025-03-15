#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k , l , c ,d , p , nl , np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;

    

    int count = 0;

    int x = (k * l) / (n * nl );
    int y = ( c* d) / n;
    int z = p / (np*n);

    count = min({ x ,y ,z});

    cout << count << endl ;

    
    return 0;
}