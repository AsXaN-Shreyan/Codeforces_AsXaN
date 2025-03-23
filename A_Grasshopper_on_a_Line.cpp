#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0); 

    int t;
    cin >> t;

    while (t--) {
        long long N, K;
        cin >> N >> K;

        if (N % K != 0) {
            cout << "1\n" << N << "\n";
        } else {
            cout << "2\n" << (N - 1) << " 1\n";
        }
    }

    return 0;
}
