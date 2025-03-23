#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        // string s ;
        // cin >> s ;

        // set<char> bulb ;
        
        // for (int i = 0; i < s.size(); i++)
        // {
        //     bulb.insert(s[i]);
        // }

        // // for (char c : s)
        // // {
        // //     freq[c]++;
        // // }

        // //cout << bulb.size() << endl ;

        // int ans = bulb.size();

        
        // if (ans == 1)
        // {
        //     cout << -1 << endl ;
        // }
        // else if (ans == 2 )
        // {
        //     cout << 6 << endl ;
            
        // }
        // else
        // {
        //     cout << 4 << endl ;
        // }

        string s;
        cin >> s;

        vector<int> a(10, 0); 

        for (char c : s) 
        {
            if (isdigit(c)) 
            { 
               ++a[c - '0'];
            }
       }

        int sum = *max_element(a.begin(), a.end());

        if (sum == 4)
        {
            cout << -1 << endl ;
        }
        else if (sum == 3)
        {
            cout << 6 << endl ;
        }
        else
            {
                cout << 4 << endl ;
            }
    
        

        
        
        
        
    }
    
    
    
    
    return 0;
}