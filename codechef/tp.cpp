#include <bits/stdc++.h>
using namespace std;

vector <int> getrank(vector <int>& arr){
    vector <int> dup = arr;
    sort(dup.begin(), dup.end());
    unordered_map <int, int> F;
    if(arr.size() == 0) return {};
    F[dup[0]] = 1;
    for(int i = 1; i < dup.size(); i++){
        if(dup[i] > dup[i-1]){
            F[dup[i]] = F[dup[i-1]] + 1;
        }
    }
    vector <int> ret(arr.size());
    for(int i = 0; i < arr.size(); i++){
        ret[i] = F[arr[i]];
    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector <int> ans = getrank(arr);
    for(auto x : ans) cout << x << " ";
    cout << endl;
}