#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

	 string s;
	 cin>>n;
	 cin>>s;

	vector<char> x;

	  while( n != 0)
      {
		  if(n %2 == 1)
          {
			  x.push_back( s[0] ) ;
		  }
          else
          {
			  x.insert(x.begin() , s[0]);
		  }
		  s.erase (0,1 );

		  n = s.length();
	  }

	  for(int i = 0; i < x.size() ; i++)

       {
		  cout << x[i];
	  }
    
    
    
    return 0;
}