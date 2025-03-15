#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<int>arr(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n > 2)
        {
            count = 1;
        }
        else{
            if (arr[1] - arr[0] > 1)
            {
                count = 0;
            }
            else{
                count = 1;
            }
        }

        if (count == 0)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;

}