#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t , n ;
    cin >> t ;
    
    while (t--)
    {
        cin >> n ;

        int count = 0, sum = 0;

		while (n % 2 == 0) 
        {
			n /= 2;

			count++;
		}
		while (n % 3 == 0) 
        {
			n /= 3;

			sum++;
		}

		if (n == 1 && count <= sum) 

        {
			cout << 2 * sum - count << endl;
		}

         else 

        {
			cout << -1 << endl;
		}


    }
    



    
    
    return 0;
}