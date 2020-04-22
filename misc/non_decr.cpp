#include <bits/stdc++.h>
using namespace std;

bool checkPossibility(vector<int>& nums) {
    bool used = false;
    int n = nums.size();
    if(n == 0) return true;
    int maxtillnow = nums[0];
    for (int i = 0; i <  n; i++) {
        if (nums[i] < maxtillnow) {
            if (!used) {
                used = true;
            }
            else {
                return false;
            }
        }
        else maxtillnow = nums[i];
    } 
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);6
    cout.tie(NULL);
    
    int n; cin >> n;
    vector <int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << checkPossibility(nums) << endl;
}