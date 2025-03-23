#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h , w ;

    cin >> h >> w ;

    vector<string> pixel(h);

    for (int i = 0; i < h; i++)
    {
        cin >> pixel[i];
    }

    for (int j = 0; j < (w+2); j++)
    {
        cout << '#' ;
    }
    cout << endl ;

    for (int i = 0; i < h; i++)
    {
        cout << '#' << pixel[i] << '#' << endl ;
    }

    for (int j = 0; j < (w+2); j++)
    {
        cout << '#' ;
    }
    cout << endl ;
    
    
    // for (int i = 0; i < h; i++)
    // {
    //     cout << pixel[i] << endl ;
    // }
    
    
    
    return 0;
}