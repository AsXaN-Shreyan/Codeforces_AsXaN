#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  

    string x, y;
    cin >> x;  
    
    int groups = 1; 

    for (int i = 1; i < n; i++) 
    {
        cin >> y;

        if (y != x) 
        {
            groups++;  
        }

        x = y;  
    }

    cout << groups << endl; 
    return 0;
}