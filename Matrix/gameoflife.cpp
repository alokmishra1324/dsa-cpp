#include <bits/stdc++.h>
using namespace std;

bool isValid(int x , int y , vector<vector<int>>& board) 
    {
        int n = board.size();
        int m = board[0].size();
        return (x >= 0 && x < n && y >= 0 && y < m);
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> delrow = {0 , 1, 0, 1, -1, 1, -1 , -1};
        vector<int> delcol = {-1 , 1, 1, 0, -1, -1, 1 , 0};

        for(int row =0;row<board.size();row++)
        {
            for(int col = 0;col<board[0].size();col++)
            {
                int count_neigh = 0;
                for(int i=0;i<8;i++)
                {
                     int nrow = row + delrow[i];
                     int ncol = col + delcol[i];

                     if(isValid(nrow , ncol , board) && abs(board[nrow][ncol]) == 1)
                     {
                        count_neigh++;
                     }
                }

                if(board[row][col] == 1 && (count_neigh < 2 || count_neigh > 3))
                {
                    board[row][col] = -1;
                }

                if(board[row][col] == 0 && count_neigh == 3)
                {
                    board[row][col] = 2;
                }
            }
        }

        for(int row = 0;row < board.size();row++)
        {
            for(int col = 0;col<board[0].size();col++)
            {
                 if(board[row][col] >= 1)
                 {
                    board[row][col] = 1;
                 }else
                 {
                    board[row][col] = 0;
                 }
            }
        }
     }