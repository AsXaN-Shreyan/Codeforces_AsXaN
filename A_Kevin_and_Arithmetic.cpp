#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);

        int c0 = 0, c1 = 0;
        
       
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];

            if (a[i] % 2 == 0) 
            {
                c0++; 
            } else {
                c1++; 
            }
        }
        
       
        if (c0 > 0) 
        {
            cout << c1 + 1 << endl;
        } 
        
        else 
        {
            cout << c1 - 1 << endl;
        }
    }
    
    return 0;
}
