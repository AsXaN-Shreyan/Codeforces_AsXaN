#include <bits/stdc++.h>

using namespace std;

int main() {
    int t ;
    cin >> t ;

    while (t--)
    {
        int n ;
        cin >> n ;

        vector<int> a(n*2);
        unordered_set <int> count ;

        for (int i = 0; i < (n*2); i++)
        {
            cin >> a[i] ;
        }

        for (int i = 0; i < (n*2); i++)
        {
            if (count.find(a[i]) == count.end())
            {
                cout << a[i] << " " ;

                count.insert(a[i]) ;
            }
            
        }

        cout << endl ;
        
        
    }
    
    
    return 0;
}
