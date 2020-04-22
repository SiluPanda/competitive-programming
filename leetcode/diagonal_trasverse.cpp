#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int N = matrix.size(), M = 0;
        if(N > 0){
            M = matrix[0].size();
        }
        vector <int> ret;
        int dir = 0;
        for(int i = 0; i < M; i++){
            int startx = 0, starty = i;
            vector <int> curr;
            while(starty >= 0 && startx < N){
                curr.push_back(matrix[startx][starty]);
                startx++;
                starty--;
            }
            if(dir){
                dir = 0;
                for(int c = 0; c < curr.size(); c++){
                    ret.push_back(curr[c]);
                }
            }
            else{
                dir = 1;
                for(int c = curr.size()-1; c >= 0; c--){
                    ret.push_back(curr[c]);
                }
            }
        }
        for(int i = 1; i < N; i++){
            int startx = i, starty = M-1;
            vector <int> curr;
            while(startx < N && starty >= 0){
                curr.push_back(matrix[startx][starty]);
                startx++;
                starty--;
            }
            if(dir){
                dir = 0;
                for(int c = 0; c < curr.size(); c++){
                    ret.push_back(curr[c]);
                }
            }
            else{
                dir = 1;
                for(int c = curr.size()-1; c >= 0; c--){
                    ret.push_back(curr[c]);
                }
            }
        }
        return ret;
    }
};

int main(){
    int N, M;
    cin >> N >> M;
    vector <vector <int>> matrix(N, vector <int>(M));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> matrix[i][j];
        }
    }
    Solution sol;
    vector <int> ans = sol.findDiagonalOrder(matrix);
    for(auto x : ans) cout << x << " ";
    cout << endl;
}