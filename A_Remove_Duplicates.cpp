#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<int> a(n);

    
    for (int i = 0; i < n; i++)

    {
        cin >> a[i];
    }

    vector<int> r;  

    
    for (int i = n - 1; i >= 0; i--)
     
    {
        bool result = false;

        
        for (int j = 0; j < r.size(); j++) 
        {
            if (a[i] == r[j]) 
            {
                result = true;
                break;
            }
        }

       
        if (!result)

        {
            r.push_back(a[i]);
        }
    }

    cout << r.size() << endl;

   
    for (int i = r.size() - 1; i >= 0; i--) 

    {
        cout << r[i] << " ";
    }
    cout << endl;
    

    return 0;
}
