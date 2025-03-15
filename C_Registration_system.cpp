#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    map<string, int> x;

    string s;

    while (t--)
    {
        cin >> s;

        if (x.find(s) != x.end()) 
        {
            cout << s << x[s] << endl;  
            x[s] = x[s] + 1;  
        }
        else
        {
            cout << "OK" << endl;  
            x[s] = 1;  
        }
    }

    return 0;
}
