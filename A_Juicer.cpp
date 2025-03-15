#include <bits/stdc++.h>
using namespace std;

int main() 

{
	long long n,b,d ;
    long long sum = 0, result = 0;

	cin>>n>>b>>d;

	for(int i=0 ; i<n ; i++)

    {
	   int x;
	   cin>>x;
	if(x <= b)
       {
		   sum += x;   
	   }
	if(sum > d)

       {
		   result += 1;
		   sum=0;
	   }

	}



cout << result << endl ;




	return 0;
}