#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;  
        vector<int> a(n);
        
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int score = 0;
        
        
        for (int x = 1; x <= n; ++x) {
            int count = 0;
            
            
            for (int i = 0; i < n; ++i) {
                if (a[i] == x) 
                {
                    count++;
                }
            }
            
            
            score += count / 2;  
        }

       
        cout << score << endl;
    }

    return 0;
}
