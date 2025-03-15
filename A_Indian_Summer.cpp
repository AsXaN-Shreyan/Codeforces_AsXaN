#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    string a , b, c ;

    set < string > x;

    while(t--)
    {
        
        cin >> a >> b ;
        c = a +'.'+ b ;

        x.insert(c);

       
    }


    cout << x.size() << endl ;
    


    

    
    
    return 0;
}