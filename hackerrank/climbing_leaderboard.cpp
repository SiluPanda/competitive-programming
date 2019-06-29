#include <bits/stdc++.h>
using namespace std;

// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
    int len_s = scores.size();
    int len_a = alice.size();
    vector <int> dup_sc;
    sort(scores.begin(), scores.end());
    for(int i = 0; i < len_s-1; i++){
        if(scores[i] != scores[i+1]){
            dup_sc.push_back(scores[i]);
        }
    }
    dup_sc.push_back(scores[len_s-1]);
    vector<int> ans;
    int rank_prev = 0;
    for(int i = 0; i < len_a; i++){
        int rank = rank_prev;
        

        while(rank < dup_sc.size()){
            if(alice[i] >= dup_sc[rank]){
                
                rank++;
            }
            else{
                rank_prev = rank;
                break;
            }
        }
        ans.push_back(dup_sc.size() - rank + 1);
    }

    return ans;


}

int main(){
    int n,m; 
    cin>>n>>m;
    vector <int> scores;
    vector <int> alice;
    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        scores.push_back(num);
    }
    for(int i = 0; i < m; i++){
        int num;
        cin>>num;
        alice.push_back(num);
    }
    vector <int> ans;
    ans = climbingLeaderboard(scores, alice);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}