#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int d1 , d2 , d3 ;
    cin >> d1 >> d2 >> d3 ;

    long long int ans1 = d1 + d2 + d3 ;
    long long int ans2 = 2*d1 + 2*d2 ;
    long long int ans3 = 2*d2 + 2*d3 ;
    long long int ans4 = 2*d1 + 2*d3 ;

    cout << min(ans1 , min(ans2 , min(ans3 , ans4))) << endl ;
   
   
   
   
   
   
   
   
   
    
    
    return 0;
}