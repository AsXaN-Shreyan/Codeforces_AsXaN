#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];


    }

    vector<int> count(n);

    for (int i = 0; i < n; i++)
    {
        count[arr[i] - 1] = (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << count[i] << " " ;
    }
    
    
    
    
    return 0;
}