#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> board(8);

    
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }

    int white = 0;
    int black = 0;

    
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            char piece = board[i][j];
            if (piece == 'Q') white += 9;
            else if (piece == 'K') white += 0;
            else if (piece == 'P') white += 1;
            else if (piece == 'N') white += 3;
            else if (piece == 'R') white += 5;
            else if (piece == 'B') white += 3;
            
            else if (piece == 'q') black += 9;
            else if (piece == 'k') black += 0;
            else if (piece == 'p') black += 1;
            else if (piece == 'n') black += 3;
            else if (piece == 'r') black += 5;
            else if (piece == 'b') black += 3;
        }
    }

    
   


    
    if (black > white) 
    {
        cout << "Black" << endl;
    } 
    else if (white > black) 
    {
        cout << "White" << endl;
    } 
    else 
    {
        cout << "Draw" << endl;
    }

    return 0;
}
