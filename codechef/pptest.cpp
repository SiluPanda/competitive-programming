#include <bits/stdc++.h>
using namespace std;

int max_score(vector <int> scores, vector <int> time, int limit){
    int n = scores.size();
    vector < vector <int> > dp(limit+1, vector <int> (n+1));
    for(int i = 0; i <= limit; i++){
        for(int j = 0; j <= n; j++){
            if(i == 0 || j == 0) {
                dp[i][j] = 0;
            }
            if(time[j-1] <= i){
                dp[i][j] = max(dp[i][j-1], scores[j-1] + dp[i-time[j-1]][j-1]);
            }
            else{
                dp[i][j] = dp[i][j-1];
            }

        }
    }
    return dp[limit][n];
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, limit;
        cin >> n >> limit;
        vector <int> scores(n), time(n);
        for(int i = 0; i < n; i++){
            int x,y,z;
            cin >> x >> y >> z;
            scores[i] = x*y;
            time[i] = z;
        }
        cout << max_score(scores, time, limit) << endl;
    }
}

