#include <iostream>
using namespace std;

int main()
 {
    string s;
    cin >> s;
    
    string x = "hello";
    
    int count = 0;

    for ( char c : s) 
    {
        if (c == x[count])
        {
            count++ ;
        }
        if (count == 5)
        {
            cout << "YES" << endl ;
            return 0;
        }
        
        
    }

    cout << "NO" << endl ;
    
    
    return 0;
}
