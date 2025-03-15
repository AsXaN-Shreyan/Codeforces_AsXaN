#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    

    while (t--)
    {
        int n ;
        cin >> n ;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0 ;

        int can = 0 ;

        int min_can = *min_element(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            can = (arr[i] - min_can);

            count = count+ can ;
        }


        cout << count << endl ;
        
        
    }
    
    
    
    return 0;
}