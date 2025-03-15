#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;

    int min(p);
    int max(p), ax(0);

    for (int i = 0; i < n; i++)
    
    {
        cin >> p;

        if (p < min)
        {
            min = p;
            ++ax;
        }
        if (p > max)
        {
            max = p;
            ++ax;
        }
    }

    cout << ax << endl;
    return 0;
    
    
}