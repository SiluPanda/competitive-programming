#include <bits/stdc++.h>
using namespace std;

static bool comp(pair <int, int> a, pair <int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}

vector <int> twosum(vector <int>& A, int B){
    int N = A.size();
    map <int, vector <int> > F;
    for(int i = 0; i < N; i++){
        F[A[i]].push_back(i);
    }
    vector <pair <int, int>> indexes;
    for(int i = 0; i < N; i++){
        if(F.count(B-A[i])){
            if(B - A[i] == A[i]){
                if(F[A[i]].size() >= 2){
                    int mini = min(i+1, F[A[i]][1]+1);
                    int maxi = max(i+1, F[A[i]][1]+1);
                    indexes.push_back(make_pair(mini, maxi));
                }
            }
            else{
                int mini = min(i+1, F[B-A[i]][0]+1);
                int maxi = max(i+1, F[B-A[i]][0]+1);
                indexes.push_back(make_pair(mini, maxi));
            }
        }
    }
    if(indexes.size() == 0){
        return {};
    }
    sort(indexes.begin(), indexes.end(), comp);
    return {min(indexes[0].first, indexes[0].second), max(indexes[0].first, indexes[0].second)};
}

int main(){
    int N, B;
    cin >> N >> B;
    vector <int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    vector <int> ans = twosum(A, B);
    for(auto x : ans) cout << x << " ";
    cout << endl;
}