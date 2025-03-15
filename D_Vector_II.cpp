#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<vector<int>> a(n);

    while (q--) 
    {
        int q;
        cin >> q;

        if (q == 0) 
        {
            int t, x;
            cin >> t >> x;
            a[t].push_back(x);
        } 
        else if (q == 1) 
        {
            int t;
            cin >> t;
            if (a[t].empty()) 

            {
                cout << endl ;
            }
             else 
            {
                for (int i = 0; i < a[t].size(); i++) 

                {
                    cout << a[t][i] << (i == a[t].size() - 1 ? "\n" : " ");
                }
            }
        } 
        else if (q == 2) 
        {
            int t;
            cin >> t;
            a[t].clear();
        }
    }
    
    
    return 0;
}