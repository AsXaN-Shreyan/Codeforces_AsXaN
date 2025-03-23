#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int a , b , xk , yk , xq , yq ;

        cin >> a >> b ;
        cin >> xk >> yk ;
        cin >> xq >> yq ;

        int magnus = abs(a-xk) ; int hikaru = abs(b - yk);
        int levi = abs (a - xq) ; int prag = abs (b - yq);

        cout << magnus << " " << hikaru << " " << levi << " " << prag << endl ;
        
        
        
    }
    
    
    
    return 0;
}