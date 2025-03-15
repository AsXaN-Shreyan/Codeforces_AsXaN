#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt; 
    cin >> tt; 
    
    for (int i = 1; i <= tt; i++) 
    {
        string shreyan;
        cin >> shreyan;
        bool ok = false;

        
        for (int i = 1; i < (shreyan.length()); i++) 
        {
            if (shreyan[i] != shreyan[0]) 
            {
                swap(shreyan[i], shreyan[0]);
                ok = true;
                break;
            }
        }

        if (!ok) 
        {
            cout << "NO" << endl ;
        } 
        else 
        {
            cout << "YES" << endl;
            cout << shreyan << endl;
        }
    }

    
    
    return 0;
}