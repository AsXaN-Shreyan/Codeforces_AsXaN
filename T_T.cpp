#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, T, X;
    cin >> S >> T >> X;
    
    if ((S < T && S <= X && X < T) || (S > T && (X >= S || X < T))) 
    {
        cout << "Yes" << endl;
    }

     else
      
    {
        cout << "No" << endl;
    }
    
    return 0;
}
