#include <iostream>
using namespace std;

int main() {
    int mc;
    cin >> mc;  
    
    while (mc--) {
        int w, h, n;
        cin >> w >> h >> n;  
        

        int wc = 0;
        int hc = 0;
        
        while (w % 2 == 0) {
            w /= 2;
            wc++;
        }
        
        while (h % 2 == 0) {
            h /= 2;
            hc++;
        }
        
        
        long long count = (1LL << wc) * (1LL << hc);  
        
        if (count >= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
