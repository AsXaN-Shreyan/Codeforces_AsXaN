#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    long long int n, k;
    long long int sum;

    int count;
    int x ;
    
    while (t--)
   
    {
        cin >> n >> k;
        
        sum = (k + 2);

        count = sum % 2;

        if (n % 2 == 0)
        {
            x  = 1;
        }
        else
        {
            if (k % 2 == 0)
            {
                x  = 0;
            }
            else
            {
                if(n<k)
                {
                    x  = 0;
                }
                else
                {
                    x  = 1;
                }
            }
        }

        if(x == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
    }
}
