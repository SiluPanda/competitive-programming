#include <bits/stdc++.h>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<long>& nums, long k, long t) {
    vector < pair <long, long> > indices;
    long n = nums.size();
    for(long i = 0; i < n; i++){
        for(long j = max((long) 0, i-k); j <= min(n-1, i+k) && j != i; j++){
            if(abs(nums[j]-nums[i]) <= t){
                return true;
            }
        }
    }
    return false;
}

int main(){
    long n, k, t;
    cin >> n >> k >> t;
    vector <long> nums(n);
    for(long i = 0; i < n; i++) cin >> nums[i];
    cout << containsNearbyAlmostDuplicate(nums, k, t) << endl;
}
        
    