#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c; 

        
        int row1 = min(a, m);
        int row2 = min(b, m);

        
        int seats = (m - row1) + (m - row2);

        
        int seated_c = min(c, seats);

        
        int total = row1 + row2 + seated_c;

        cout << total << endl;  
    }

    return 0;
}
