#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool containsNearbyDuplicate(vector<int>& nums, int k){
    unordered_map <int, vector <int> > F;
    for(int i = 0; i < nums.size(); i++){
        F[nums[i]].push_back(i);
    }
    for(auto it = F.begin(); it != F.end(); it++){
        vector <int> curr = it->second;
        if(curr.size() >= 2){
            for(int i = 0; i < curr.size()-1; i++){
                if((curr[i+1] - curr[i]) <= k){
                    return true;
                }
            }
        }
       
    }
    return false;
}

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int k;
    cin >> k;
    cout << containsNearbyDuplicate(v, k) << el;
}