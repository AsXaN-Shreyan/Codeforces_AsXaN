#include <iostream>
 
using namespace std;
 
int main()
{
    int w, y;
    cin >> y >> w;
    int shreyan;
    if (y > w)
    {
        shreyan = y;
    }
    else
    {
        shreyan = w;
    }
    if (shreyan == 1)
    {
        cout << "1/1";
    }
    else if (shreyan == 2)
    {
        cout << "5/6";
    }
    else if (shreyan == 3)
    {
        cout << "2/3";
    }
    else if (shreyan == 4)
    {
        cout << "1/2";
    }
    else if (shreyan == 5)
    {
        cout << "1/3";
    }
    else if (shreyan == 6)
    {
        cout << "1/6";
    }
 
    return 0;
}
