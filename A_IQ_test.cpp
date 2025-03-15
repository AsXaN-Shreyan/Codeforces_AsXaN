#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    vector<int> a(t);

    for (int i = 0; i < t; i++)
    {
        cin >> a[i] ;
    }

    //sort(a.begin() , a.end());

    

    //int def = INT_MAX ;

    int countE = 0;
    int countO = 0;

    for (int i = 0; i < t; i++)
    {
        // def = a[0] ;

        if (a[i] % 2 == 0 ||  a[i] == 2)
        {
            countE++ ;
        }
        else
        {
            countO++ ;
        }
        
        
    }

    int fao = 0 ;

    int index =  0  ;

    //cout << countE << " " << countO << endl ;

   if (countE > countO)
   {
    for (int i = 0; i < t; i++)
    {

        if (a[i] % 2 == 0 )
        {
            fao++ ;
        }
        else
        {
            index = i ;
            // break;
        }
        
        
    }
   }
   else if (countE < countO)
   {
    for (int i = 0; i < t; i++)
    {

        if (a[i] % 2 != 0 )
        {
            fao++ ;
        }
        else if (a[i] %2 == 0 )
        {
            index = i ;
            // break;
        }
        
        
    }
   }
   
   
    
    cout << index+1 << endl ;
    
    return 0;
}