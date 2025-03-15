#include <iostream>
#include <string>
using namespace std;

int main() 

{
    string n;
    cin >> n;

    int i = 0;
    while (i < n.length()) 
    
    {
        
        if (i + 2 < n.length() && n[i] == '1' && n[i + 1] == '4' && n[i + 2] == '4') 
        
        {
            i += 3; 
        }
         else if (i + 1 < n.length() && n[i] == '1' && n[i + 1] == '4') 
        
        {
            i += 2; 
        }
         else if (n[i] == '1') 
        
        {
            i += 1; 
        }
         else 
        
        {
            cout << "NO" << endl; 
            return 0;
        }
    }

    cout << "YES" << endl; 
    return 0;
}
