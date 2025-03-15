#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;  
    
    
    vector<int> x;
    int count = 1;
    
    
    while (x.size() < 1000) {
       
        if (count % 3 != 0 && count % 10 != 3) {
            x.push_back(count);
        }
        count++;
    }
    
    
    while (t--) {
        int n;
        cin >> n;  
        
        
        cout << x[n - 1] << endl;
    }

    return 0;
}
