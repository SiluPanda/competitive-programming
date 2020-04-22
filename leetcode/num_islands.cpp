#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int N = grid.size(), M = 0;
        if(N > 0){
            M = grid[0].size();
        }
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(grid[i][j] == '1'){
                    count++;
                    queue <pair <int, int>> Q;
                    Q.push(make_pair(i, j));
                    while(!Q.empty()){
                        pair <int, int> curr = Q.front();
                        int x = curr.first, y = curr.second;
                        Q.pop();
                        if(x < N-1 && grid[x+1][y] == '1'){
                            Q.push(make_pair(x+1, y));
                            grid[x+1][y] = '0';
                        }
                        if(x > 0 && grid[x-1][y] == '1'){
                            Q.push(make_pair(x-1, y));
                            grid[x-1][y] = '0';
                        }
                        if(y > 0 && grid[x][y-1] == '1'){
                            Q.push(make_pair(x, y-1));
                            grid[x][y-1] = '0';
                        }
                        if(y < M-1 && grid[x][y+1] == '1'){
                            Q.push(make_pair(x, y+1));
                            grid[x][y+1] = '0';
                        }
                    }
                }
            }
        }
        return count;
    }
};

int main(){
    int N, M;
    cin >> N >> M;
    vector <vector <char>> grid(N, vector <char>(M));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> grid[i][j];
        }
    }
    Solution sol;
    cout << sol.numIslands(grid) << endl;
}