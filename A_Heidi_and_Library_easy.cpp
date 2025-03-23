#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    cin >> n >> k;
    
    vector<int> req(n);
    for (int i = 0; i < n; i++) {
        cin >> req[i];
    }

    unordered_set<int> sum;
    
    int cost = 0;

    for (int i = 0; i < n; i++) {
        int book = req[i];

        
        if (sum.count(book)) 
        {
            continue;
        }

        
        if (sum.size() == k) 
        {
            unordered_map<int, int> use;

            for (int j = i + 1; j < n; j++) 
            {
                if (!use.count(req[j]) && sum.count(req[j])) 
                {
                    use[req[j]] = j; 
                }
            }

           
            int remove = -1, md = -1;


            for (int b : sum) {
                if (!use.count(b)) 
                {
                    remove = b;
                    break; 
                }
                if (use[b] > md) 
                {
                    md = use[b];
                    remove = b;
                }
            }

            sum.erase(remove);
        }

        
        sum.insert(book);
        cost++;
    }

    cout << cost << endl;

    return 0;
}
