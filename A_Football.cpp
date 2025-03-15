#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    string s ;
    cin >> s ;

    string p , k ;

    int arsenal = 1 ;
    int man_city = 0 ;

    // if (n > 1)
    // {
      for (int i = 1; i < (n); i++)
    {
      cin >> p ;

      if (s == p)
      {
        arsenal++ ;
      }
      else
      {
        k = p ;

        man_city++ ;
      }
      
      
    }
    

    // else
    // {
    //   cout << s << endl ;
    //   return 0 ;
    // }
    
    



    

    // for (int i = 0; i < (n-1); i++)
    // {
    //   /* code */
    // }


    if (arsenal > man_city)
    {
      cout << s << endl ;
    }
    else
    {
      cout << p << endl ;
    }
    
    
    
    

    
    
  return 0;
}