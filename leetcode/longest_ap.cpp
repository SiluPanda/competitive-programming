#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        int n = A.size();
        if(n <= 2){
            return n;
        }
        vector < map <int, int> > dp(n);
        int max_len = 0;
        for(int i = 1; i < n; i++){
            for(int j = i-1; j >= 0; j--){
                dp[i][A[i]-A[j]] = max(dp[i][A[i]-A[j]], dp[j][A[i]-A[j]]+1);

                max_len = max(max_len, dp[i][A[i]-A[j]]);
            }
        }
        return max_len+1;
    }
};

int main(){
    int n;
    cin >> n;
    vector <int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    Solution sol;
    cout << sol.longestArithSeqLength(A) << endl;
}