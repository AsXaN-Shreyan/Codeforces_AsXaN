#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
	cin >> t;
	while (t--)
    {
        //shreyan
		long long int  x1, x2;
		int p1, p2;
		cin >> x1 >> p1 >> x2 >> p2;
		int minx = min(p1, p2);
		p1 -= minx;
		p2 -= minx;
		if (p1 >= 7)
        {
			cout << ">" << endl;
        }
		else if (p2 >= 7)
        {
			cout << "<" << endl;
        }
		else
        {
			for (int i = 0; i < p1; ++i)
            {
             x1 *= 10;
            }
			for (int i = 0; i < p2; ++i)
            {
             x2 *= 10;
            }
			if (x1 < x2)
            {
				cout << "<" << endl;
            }
			else if (x1 > x2)
            {
				cout << ">" << endl;
            }
			else
            {
				cout << "=" << endl;
            }
		}
	}
    
    
    return 0;
}