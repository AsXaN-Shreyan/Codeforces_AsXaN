#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
   
    int count = (n + 1) / 2;
    
   
    while (count % m != 0)

    {
        count++;
    }
    
    
    if (count > n) 
    {
        cout << -1 << endl;
    } 

    else 

    {
        cout << count << endl;
    }
    
    return 0;
}