#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        long long int x , n , m ;
        cin >> x >> n >> m ;

        long long int count = x ;

        
        if (x > 20)
        {

            


            for (int i = 0; i < n; i++)
        {
             count = (count+ 20) / 2 ;

            
        }

        //cout << count << endl ;


        for (int i = 0; i < m; i++)
        {
            count = count - 10 ;
        }


        
        }
        else
        {
           for (int i = 0; i < m; i++)
        {
            count = count - 10 ;
        }


        if (count <= 0)
        {
            count = count ;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                count = (count+20)/2;
            }
            
        }
        
        

        //cout << count << endl ;

        
        }
        
        


        

        //cout << count << endl ;

        if (count <= 0)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
        
        
        
        
    }
    
    
    
    return 0;
}