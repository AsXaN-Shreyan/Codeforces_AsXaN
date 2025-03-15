#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    cin >> s ;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string x = "";

    

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u' || s[i] == 'y')
        {
            //x += '.';
            //s.pop_back();
            continue;
        }
        
        
   
    //cout << "." << x << endl;

        x += '.' + string(1, s[i]);
    }

    //cout << '.' << s << endl ;

    cout << x << endl ;
    
    


    
    
    return 0;
}