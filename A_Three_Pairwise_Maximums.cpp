#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;

     int x ,y ,z ;


     while(t--)

     {
         cin>>x>>y>>z
         ;
         if(x == y && y == z)
         {
             cout <<"YES"<< endl;

             cout <<x<<" "<<x<<" "<<x<< endl;
         }
         else if(x==y)

         {
             if(z>x)
             {
                 cout <<"NO" << endl;
             }
             else
             {
                 cout <<"YES" << endl;
                 cout <<z<<" "<<y<<" "<<1<< endl;
             }
         }
         else if(x==z)
         {
               if(y>x)
             {
                 cout <<"NO" << endl;
             }
             else
             {
                 cout <<"YES" << endl;
                 cout <<x<<" "<<y<<" "<<1<< endl;
             }
         }
         else if(y==z)
         {
             if(x>y)
             {
                 cout <<"NO" << endl;
             }
             else
             {
                 cout <<"YES" << endl;
                 cout <<x<<" "<<1<<" "<<y<< endl;
             }
         }
         else
         {
             cout <<"NO" << endl;
         }
     }

     return 0 ;
}