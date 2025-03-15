#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        int f = ((a - b) ); 
        int g = ((a + b) ); 

        int k = (c - d);
        int l = (c + d); 

        bool result = false; 

       if( (n*g >= k) && (n*f <= l) ){
            cout<<"Yes" << endl;
        }
        else{
            cout<<"No" << endl;
        }
        
    }

    return 0;
}
