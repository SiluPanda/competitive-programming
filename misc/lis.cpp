#include <bits/stdc++.h>
using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
    int n = nums.size();
    if(n <= 1) return n;
    int ret = 0, currf = 1, prev = nums[0], i = 1;
    while(true){
        if(i == n){
            ret = max(currf, ret);
            break;  
        }
        if(nums[i] > prev) currf++;
        else{
            ret = max(currf, ret);
            currf = 1;
        }
        prev = nums[i];
        i += 1;
    }
    return ret;
    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    vector <int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cout << findLengthOfLCIS(nums) << endl;
}