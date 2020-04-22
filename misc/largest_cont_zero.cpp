#include <bits/stdc++.h>
using namespace std;

vector <int> lszero(vector <int>& A){
    int N = A.size();
    vector <int> prefix(N+1);
    prefix[0] = 0;
    for(int i = 1; i <= N; i++){
        prefix[i] = prefix[i-1] + A[i-1];
    }
    unordered_map <int, vector <int> > F;
    for(int i = 0; i < N+1; i++){
        F[prefix[i]].push_back(i);
    }
    int maxi = INT_MIN;
    int start = 0, end = 0;
    for(auto it = F.begin(); it != F.end(); it++){
        if(it->second.size() >= 2){
            if(maxi == it->second.back()-it->second.front()){
                if(start > it->second.front()){
                    start = it->second.front();
                    end = it->second.back();
                }
                
            }
            else if(maxi < it->second.back()-it->second.front()){
                maxi = it->second.back()-it->second.front();
                start = it->second.front();
                end = it->second.back();
            }
        }
    }
    vector <int> ret;
    for(int i = start; i < end; i++){
        ret.push_back(A[i]);
    }
    return ret;
}

int main(){
    int N;
    cin >> N;
    vector <int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    vector <int> ans = lszero(A);
    for(auto x : ans){
        cout << x << " ";
    }
    cout << endl;
}