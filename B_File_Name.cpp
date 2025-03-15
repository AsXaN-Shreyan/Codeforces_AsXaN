#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    
    
    cin >> n;
    cin >> s;
    
    int r = 0;
    int i = 0;
    
    
    
    while (i < n) 
    {
        if (s[i] == 'x') {
            
            int st = i;

            while (i < n && s[i] == 'x') 
            {
                i++;
            }
            
            int b = i - st;

            if (b >= 3) 
            {
                r += b - 2;
            }
        } 
        else 
        {
            
            i++;
        }
    }
    
   
    cout << r << endl;
    
    return 0;
}
