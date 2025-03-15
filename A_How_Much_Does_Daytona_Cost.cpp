#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n, k;
        cin >> n >> k;  
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }

        bool found = false;  
        
        
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                
                int ck = 0;
                int max_count = 0;
                bool k_is_max = true;

                
                for (int x = i; x <= j; x++) {
                    if (a[x] == k) {
                        ck++;
                    }
                }

                
                for (int x = i; x <= j; x++) {
                    if (a[x] != k) {
                        int count_other = 0;
                        for (int y = i; y <= j; y++) {
                            if (a[y] == a[x]) {
                                count_other++;
                            }
                        }
                        if (count_other >= ck) {
                            k_is_max = false;
                            break;
                        }
                    }
                }

                if (k_is_max) {
                    found = true;
                }
                    break;  
            }

            if (found) {
                break;  
            }
        }

        if (found) {
            cout << "YES" << endl;  
        } else {
            cout << "NO" << endl;  
        }
    }

    return 0;
}
