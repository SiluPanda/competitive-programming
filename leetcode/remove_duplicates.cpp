#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int fast = 1, slow = 0;
    int ret = 0;
    for(; fast < n; fast++){
        if(nums[slow] != nums[fast]){
            slow++;
            nums[slow] = nums[fast];
            
        }
    }
    return slow+1;
}

int main(){
    int n;
    cin >> n;
    vector <int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int ans = removeDuplicates(nums);
    for(int i = 0; i < ans; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}
        
    