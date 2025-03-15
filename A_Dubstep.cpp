#include <iostream>
using namespace std;
int main() {
    string s;

    cin>>s;

    string x;
    
    bool result = false;

    for (int i = 0; i < s.length(); i++) {
        
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            
            i += 2;
           
            if (result) {
                
                x.push_back(' ');
                
                result = false;
            }
        } 
        else {
            
            x.push_back(s[i]);
        
            result = true;
        }
    }
    cout<<x<<endl;
    return 0;
}