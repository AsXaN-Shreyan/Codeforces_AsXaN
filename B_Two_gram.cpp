#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    int result = 0 ;
    int count = 0 ;
    string answer ;

    for (int i = 0; i < n-1; i++)
    {
        count = 0 ;

        for (int j = 0; j < n-1; j++)
        {
            if (s[i] == s[j] && s[i+1] == s[j+1])
            {
                count++ ;
                if (result < count )
                {
                    result = count ;
                    answer = string(1 , s[i]) + string(1 , s[i+1]);
                }
                
            }
            
        }
        
    }
    cout << answer << endl ;
    
    


    
    return 0;
}
