#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    
    int arr[x];
    int count = 0;
    
    
    for (int i = 0; i < x; i++)
     {
        cin >> arr[i];
    }
    
    
    int max_sum = *max_element(arr, arr + x);
    
    
    for (int i = 0; i < x; i++) 
    {
        count += (max_sum - arr[i]);
    }
    
    
    cout << count << endl;

    return 0;
}
