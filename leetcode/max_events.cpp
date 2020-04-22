#include <bits/stdc++.h>
using namespace std;

class Solution(){
    public:
    int maxEvents(vector <vector<int>>& events){
        int N = events.size();
        if(N == 0) return 0;
        sort(events.begin(), events.end(), comp);
        int ans = 0, curr = events[0][0];
        for(int i = 0; i < N; i++){
            if(curr >= events[i][0] && curr <= events[i][1]){
                ans++;
            }
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}