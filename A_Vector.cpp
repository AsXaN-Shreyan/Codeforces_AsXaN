#include <bits/stdc++.h>
using namespace std;

int main()
{
     int q; 
    cin >> q;

    int x , p ;

    vector<int> arr; 
    
    while (q--)

    {
        int count ;
        cin >> count ;
        
        if (count  == 0) 
        {
          
            cin >> x;
            arr.push_back(x);
        } 
        else if (count  == 1) 
        {
         
            cin >> p;

            cout << arr[p] << endl;
        } 
        else if (count  == 2) 
        {
            
           arr.pop_back();
        }
    }
    
    
    return 0;
}