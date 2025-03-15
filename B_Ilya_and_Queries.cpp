#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int n = s.size();

    
    vector<int> a(n, 0);

    for (int i = 1; i < n; i++) 
    {
        
        a[i] = a[i - 1] + (s[i] == s[i - 1]);
    }

    
    int m;

    cin >> m;

    while (m--) 
    {
        int l, r;
        cin >> l >> r;
        cout << a[r - 1] - a[l - 1] << endl;
    }

    return 0;
}
