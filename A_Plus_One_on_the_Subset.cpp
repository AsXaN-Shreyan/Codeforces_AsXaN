#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    int n ;
    int count = 0 ;

    while (t--)
    {
        cin >> n ;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i] ;

            
        }
        int maxElement = *max_element(arr.begin(), arr.end());
        int minElement = *min_element(arr.begin(), arr.end());

        
        int count = maxElement - minElement;

        cout << count << endl ;
        
    }
    
    
    return 0;
}