#include <bits/stdc++.h>
using namespace std;

int main()
{
        int i,j,k;
        
        int n;

        cin >> n;

        vector < int >a(n);

        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i] ;
        }

        sort(a.begin() , a.end());

        int count = 0 ;


        for(int i = 1 ; i < n ; i++)

        {
            if( a[i] > a[i-1])
            {
                cout << a[i] << endl;

                count=1;

                break;
            }
        }

        if( count == 0)
        {
            cout<<"NO" << endl ;
        }
    
    

    
    return 0;
}