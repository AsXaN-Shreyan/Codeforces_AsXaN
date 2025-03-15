#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  
    
    while (t--) 
    {
        int n;
        cin >> n;  
        vector<int> candy(n);
        int count1 = 0, count2 = 0;
        
        
        for (int i = 0; i < n; i++) 
        {
            cin >> candy[i];

            if (candy[i] == 1) 
            {
                count1++;
            } 
            else 
            {
                count2++;
            }
        }
        
        int w = count1 + 2 * count2;  
        
        
        if (w % 2 != 0) 
        {
            cout << "NO" << endl;
        } else 
        {
            int t = w / 2;
            
            
            int u = min(count2, t / 2);
            t -= u * 2;
            
            
            if (t <= count1) 
            {
                cout << "YES" << endl;
            } 
            else 
            {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}
