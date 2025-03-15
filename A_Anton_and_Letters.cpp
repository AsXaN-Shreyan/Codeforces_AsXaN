#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    set <char> x;

    getline(cin,str);

    for(int i= 0 ; i < str.length() ; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
         
            x.insert(str[i]);
        }
    }

    //cout << x.lenght << endl ;

    cout << x.size() << endl;
    
    
    
    return 0;
}