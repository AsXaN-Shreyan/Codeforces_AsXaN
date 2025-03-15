#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, o ;
    cin >> t ;
     long long int max_count = 0 ;

    vector<int> a(t);

    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }



    long long int count = 1 ;
    max_count = INT_MIN ;

    if (t == 1)
    {
        cout << "1" << endl ;
        return 0 ;

    }
    

else
{
        for (int i = 1; i < t; i++)
    {
        if (a[i] >= a[i-1])
        {
            count++;
           
        }
        else
        {
             count = 1;
        }

        if (count > max_count)
        {
            max_count = count ;
        }
        

       
        
        
    }
}

    

    cout << max_count << endl ;
    
    
    
    
    return 0;
}