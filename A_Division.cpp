#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int s ;

    for (int i = 0; i < n; i++)
    {
        cin >> s ;

        if (s >= 1900) 
        {
            cout << "Division 1" << endl;
        } 
        else if (s >= 1600) 
        {
            cout << "Division 2" << endl;
        } 
        else if (s >= 1400) 
        {
            cout << "Division 3" << endl;
        } 
        else 
        {
            cout << "Division 4" << endl;
        }
        
    }
    
    
    
    return 0;
}