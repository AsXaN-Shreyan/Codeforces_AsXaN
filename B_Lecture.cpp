#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ;
    string lan1 , lan2 ;
    cin >> n >> m ;
    
    map<string , string> text ; 

    for (int i = 0; i < m ; i++)
    {
        cin >> lan1 >> lan2 ;

        if (lan1.size() <= lan2.size())
        {
            text[lan1] = lan1 ;
            
        }
        else
        {
            text[lan1] = lan2 ;
        }
        
        
        
    }

    for (int i = 0; i < n ; i++)
    {
        string lecture ;
        cin >> lecture ;

        cout << text[lecture] << " "  ;
    }
    
    
    
    
    return 0;
}