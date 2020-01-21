#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

vector<vector<int>> threeSum(vector<int>& nums) {
    vector < vector <int> > ret;
    int n = nums.size();
    if(n <= 2) return ret;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n-2; i++){
        int head = i+1, tail = n-1;
        while(head < tail){
            int sum = nums[i] + nums[head] + nums[tail];
            if(sum == 0){
                vector <int> curr(3);
                curr[0] = i, curr[1] = head, curr[2] = tail;
                ret.push_back(curr);
            }
            else if(sum < 0){
                head++;
            }
            else tail--;
        }
    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    vector <int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector < vector <int> > ans = threeSum(nums);
    for(auto x: ans){
        cout << x[0] << " " << x[1] << " " << x[2] << endl;
    }
    cout << endl;
}