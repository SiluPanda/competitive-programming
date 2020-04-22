#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int N = grid.size(), M = 0;
        if(N > 0){
            M = grid[0].size();
        }
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                int up = INT_MAX, down = INT_MAX;
                if(i > 0){
                    up = grid[i-1][j];
                }
                if(j > 0){
                    down = grid[i][j-1];
                }
                if(up != INT_MAX || down != INT_MAX){
                    grid[i][j] += min(up, down);
                }
            }
        }
        return grid[N-1][M-1];
    }
};

int main(){
    int N, M;
    cin >> N >> M;
    vector <vector <int>> grid(N, vector <int>(M));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> grid[i][j];
        }
    }
    Solution sol;
    cout << sol.minPathSum(grid) << endl;
}