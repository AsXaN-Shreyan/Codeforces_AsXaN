#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    string name , role , cap ;

    vector<string> rat ;
    vector<string> woman_child ;
    vector<string> man ;

    while (n--)
    {
        cin >> name >> role ;

        if (role == "captain")
        {
            cap = name ;
        }
        else if (role == "rat")
        {
            rat.push_back(name);
        }
        else if (role == "woman" || role == "child")
        {
            woman_child.push_back(name);
        }
        else if (role == "man")
        {
            man.push_back(name);
        }
    
    }

    for (int i = 0; i < rat.size(); i++)
    {
        cout << rat[i] << endl ;
    }
    for (int i = 0; i < woman_child.size(); i++)
    {
        cout << woman_child[i] << endl ;
    }
    for (int i = 0; i < man.size(); i++)
    {
        cout << man[i] << endl ;
    }

    cout << cap << endl ;
    
    

    
    
    return 0;
}