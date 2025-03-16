#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        string s ;
        cin >> s; 

        int count = 0 ;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] =='0')
            {
                count += 0 ;
            }

            else if (s[i] =='1')
            {
                count += 1 ;
            }
            else if (s[i] =='2')
            {
                count += 2 ;
            }

            else if (s[i] =='3')
            {
                count += 3 ;
            }

            else if (s[i] =='4')
            {
                count += 4 ;
            }

            else if (s[i] =='5')
            {
                count += 5 ;
            }

            else if (s[i] =='6')
            {
                count += 6 ;
            }

            else if (s[i] =='7')
            {
                count += 7 ;
            }

            else if (s[i] =='8')
            {
                count += 8 ;
            }

            else if (s[i] =='9')
            {
                count += 9 ;
            }

            // else if (s ='0')
            // {
            //     count += 0 ;
            // }
            
        }

        cout << count << endl ;
        

    
    }
    
    
    
    return 0;
}