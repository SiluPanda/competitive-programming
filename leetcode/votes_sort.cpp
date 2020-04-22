#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool comp(vector <int> A, vector <int> B){
        for(int i = 0; i < A.size(); i++){
            if(A[i] != B[i]){
                return A[i] > B[i];
            }
        }
        return false;
    }
    string rankTeams(vector<string>& votes) {
       int N = votes.size(), M = 0;
        if(N > 0){
            M = votes[0].size();
        }
        else{
            return "";
        }
        map <char, vector <int> > F;
        vector <int> ini(M, 0);
        for(auto x : votes[0]) F[x] = ini;
        for(auto x : votes){
            for(int i = 0; i < x.length(); i++){
                F[x[i]][i]++;
            }
        }
        vector < vector <int> > fin;
        for(auto it = F.begin(); it != F.end(); it++){
            it->second.push_back(it->first-'A');
            fin.push_back(it->second);
        }
        sort(fin.begin(), fin.end(), comp);
        string ret = "";
        for(int i = 0; i < M; i++){
            ret += (fin[i].back()+'A');
        }
        return ret;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution sol;
    vector <string> inp;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        string v;
        cin >> v;
        inp.push_back(v);
    }
    cout << sol.rankTeams(inp) << endl;
}