#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    
    while (t--) {
        int x[4], y[4];
        
        
        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }
        
        
        int max_x = *max_element(x, x + 4);
        int min_x = *min_element(x, x + 4);
        
        
        int side_length = max_x - min_x;
        
        
        cout << side_length * side_length << endl;
    }

    return 0;
}
