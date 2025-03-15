#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    string s;
    int count = 0;  

    while (t--) 
    {
        string p = "";  

        for (int i = 0; i < 8; i++)
        {
            cin >> s;

            for (int j = 0; j < 8; j++)  
            {
                if (s[j] == '.')
                {
                    count++;  
                }
                else
                {
                    p += s[j];  
                }
            }
        }

        
        cout << p << endl;
    }

    
    return 0;
}
