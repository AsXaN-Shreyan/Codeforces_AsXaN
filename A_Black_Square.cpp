#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1, a2, a3, a4;

    cin >> a1 >> a2 >> a3 >> a4;

    string s;

    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length(); i++) 
    {
        int x = s[i] - '0';

        if (x == 1) 
        {
            count += a1;
        } 

        else if (x == 2) 
        {
            count += a2;
        } 

        else if (x == 3) 
        {
            count += a3;
        } 
        
        else if (x == 4) 
        {
            count += a4;
        }
    }
    cout << count << endl;
    return 0;
        
        


    
    
    return 0;
}