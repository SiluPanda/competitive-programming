#include <bits/stdc++.h>
using namespace std;

int get(vector <int> arr, int num){
    int ans = 0;
    for(auto x : arr){
        if(num >= x) break;
        ans += (num < x);
    }
    return ans;
}

int numsub(vector <int> nums, int k){
    int n = nums.size();
    unordered_map <int, vector <int> > index;
    vector <int> pre(n+1);
    pre[0] = 0;
    for(int i = 1; i <= n; i++) pre[i] = pre[i-1]+nums[i-1];
    for(int i = 0; i <= n; i++) index[pre[i]].push_back(i);
    int ans = 0;
    for(int  i = 0; i <= n; i++){
        if(index.count(pre[i]+k)){
            ans += get(index[pre[i]+k], i);
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector <int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cout << numsub(nums, k) << endl;
}