#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int N = matrix.size();
        int M = 0;
        if(N > 0) M = matrix[0].size();
        vector <int> minrow(INT_MAX, N), maxcol(INT_MIN, M);
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                minrow[i] = min(minrow[i], matrix[i][j]);
                maxcol[j] = max(maxcol[j], matrix[i][j]);
            }
        }
        vector <int> ret;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(matrix[i][j] == minrow[i] && matrix[i][j] == maxcol[j]){
                    ret.push_back(matrix[i][j]);
                }
            }
        }
        return ret;
        
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector <vector <int>> matrix(N, vector <int> (M));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> matrix[i][j];
        }
    }
    solution sol;
    vector <int> ans = sol.luckyNumbers(matrix);
    for(auto x : ans) cout << x << " ";
    cout << endl;
}