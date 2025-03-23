#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r;
    
    cin >> n >> l >> r;

   
    int mns = 0;
    for (int i = 0; i < l; i++) 
    {
        mns += (1 << i);  
    }

    mns += (n - l); 

    
    int mnx = 0;
    
    for (int i = 0; i < r; i++) 
    {
        mnx += (1 << i); 
    }

    mnx += (n - r) * (1 << (r - 1)); 
    
    cout << mns << " " << mnx << endl;
    return 0;
}
